from pathlib import Path
import os

def extract():
    rc = "geoelectrical\\resource.rc"
    rh = "geoelectrical\\resource.h"
    ides = []
    tipes = ["PUSHBUTTON", "DEFPUSHBUTTON", "COMBOBOX", "LTEXT"]
    std_tipes = ["PBTN", "DPBTN", "CBX", "LT"]
    if (os.path.exists(rc)):
        with open(rc, "r") as f:
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
                    capt = L[0].split("\"")[1]
                    capt = capt.replace("&","")
                    capt = capt.replace(" ","")
                    if tipe in tipes:
                        idx = tipes.index(tipe)
                        tipe= std_tipes[idx]
                    ides.append("ID_{}_{}\t\t{}".format(tipe, capt, iden))

    new_cnt = ""
    if (os.path.exists(rh)):
        with open(rh, "r") as f:
            cnt = f.read()
            new_cnt = cnt.split("//IDS_INSERTED")[0]
            new_cnt = "{}\n{}\n".format(new_cnt, "//IDS_INSERTED")
            for each in ides:
                new_cnt = "{}\n{}".format(new_cnt, each)
        with open(rh, "w") as f:
            f.write(new_cnt)


if __name__ == "__main__":
    extract()
