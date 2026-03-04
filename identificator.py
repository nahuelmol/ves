from pathlib import Path
import os

def hira_detector(capt):
    main_kata = ["あ", "か", "さ", "た", "な", "は","ま","や","ら","わ"]
    kata_code = ["3042", "304B", "3055", "305F", "306A", "306F", "307E", "3084", "3089", "308F"]
    for i_kata in main_kata:
        if i_kata in capt:
            print(i_kata.encode("unicode_escape"))
            idx = main_kata.index(i_kata)
            return kata_code[idx]
    return "None"

def take_caption(lines, L):
    for line in lines:
        myline = line.strip().split(",")
        if (myline[0].split(" ")[0]) == "LTEXT":
            if L[2] == myline[3]:
                caption = myline[0].split("\"")[1]
                caption = caption.replace("&", "").replace(" ", "")
                return caption

def extract():
    rc = "geoelectrical\\resource.rc"
    rh = "geoelectrical\\resource.h"
    ides = []
    tipes = ["PUSHBUTTON", "DEFPUSHBUTTON", "COMBOBOX", "LTEXT"]
    std_tipes = ["PBTN", "DPBTN", "CBX", "LT"]
    if (os.path.exists(rc)):
        with open(rc, "r", encoding="utf-16") as f:
            cnt = f.read()
            par = cnt.split("BEGIN")[1]
            elements = par.split("END")[0]
            lines = elements.split("\n")
            print(lines[0])
            for line in lines:
                L = line.strip().split(",")
                if len(L) != 1:
                    iden = L[1]
                    tipe = L[0].split(" ")[0]
                    if not tipe == "COMBOBOX":
                        capt = L[0].split("\"")[1]
                        capt = capt.replace("&","")
                        capt = capt.replace(" ","")
                    else:
                        capt = take_caption(lines, L)
                    if tipe in tipes:
                        idx = tipes.index(tipe)
                        tipe= std_tipes[idx]
                    capt = hira_detector(capt)
                    ides.append("#define ID_{}_{}\t\t\t\t{}".format(tipe, capt, iden))

    new_cnt = ""
    if (os.path.exists(rh)):
        with open(rh, "r") as f:
            cnt = f.read()
            new_cnt = cnt.split("//IDS_INSERTED")[0]
            new_cnt = "{}\n{}\n".format(new_cnt, "//IDS_INSERTED")
            for each in ides:
                new_cnt = "{}\n{}".format(new_cnt, each)
        with open(rh, "w", encoding="utf-16") as f:
            f.write(new_cnt)

if __name__ == "__main__":
    extract()

