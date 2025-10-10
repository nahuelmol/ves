import os

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

def controls(ctrl):
    print("thinking on")


if __name__ == "__main__":
    res, controls = extract()
    if res == True:
        convert(controls)



