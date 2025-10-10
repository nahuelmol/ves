import os
import re

def extract():
    cwd = os.getcwd()
    rcpath = "myres\myresource\myresource.rc"
    path = "{}\{}".format(cwd, rcpath)
    controls = []
    if not os.path.exists(path):
        print("path: {}\ndoes not exists".format(path))
        return False, None
    with open(path, "r", encoding="latin1") as f:
        lines = f.readlines()
        incontrol = False
        for l in lines:
            line = l.strip()
            for cada in line:
                if "{" == cada:
                    incontrol = True
                if "}" == cada:
                    incontrol = False
            if incontrol == True:
                controls.append(line)
        return True, controls

def modify(ctrls):
    ctr_class = ["BUTTON", "COMBOBOX", "STATIC"] 
    BS  = ["BS_DEFPUSHBUTTON", "BS_PUSHBUTTON"]
    CBS = ["CBS_DROPDOWN"]
    SS  = ["SS_LEFT"]
    
    classic = ""
    j = 0
    for ctrl in ctrls:
        ctrl = ctrl.replace("\x00", "")
        listed = ctrl.split(",")
        if (j % 2 == 0) and (j!=0) :
            caption = listed[0].split('"')[1]
            ID      = listed[1]
            style   = ""
            classy  = ""

            third = listed[3].replace("\x00", "")
            words = third.split(" ")
            for bs in BS:
                if bs in words:
                    classy = bs[3:]
                    bs = "{} |".format(bs)
                    style = third.replace(bs, "")
            for ss in SS:
                if ss in words:
                    classy = ss[3:]
                    ss = "{} |".format(ss)
                    style = third.replace(ss, "")
            for cbs in CBS:
                if cbs in words:
                    classy = cbs[4:]
                    cbs = "{} |".format(cbs)
                    style = third.replace(cbs, "")
            dims = listed[-4:]
            newline = "{} \"{}\", {},".format(classy, caption, ID)
            for di in dims:
                newline = "{} {},".format(newline, di)
            newline = "{} {}".format(newline, style)
            classic = "{}\n{}".format(classic, newline)
        j=j+1
    return classic


def convert(ctrl):
    res = "geoelectrical\\resource.rc"
    path = "{}\{}".format(os.getcwd(), res)
    with open(path, "r", encoding="latin1") as f:
        cnt = f.read()
        prev= cnt.split("BEGIN")
        print(prev)
        last= cnt.split("END")
        classic = modify(ctrl)
        modified= "{}\n{}\n{}".format(prev, classic, last)
        return modified

if __name__ == "__main__":
    res, controls = extract()
    if res == True:
        converted = convert(controls)
        with open("prove.rc", "w") as f:
            f.write(converted)





