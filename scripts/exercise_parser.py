import os

def get_ex_n(path):
    for dir in path.split("/"):
        if dir.startswith("ex"):
            return dir
    return False

def copy_file(path, filename, destination):
    content = ""
    with open(path+"/"+filename, "r") as f:
        content = f.read()

    if not os.path.isdir(destination):
        buffer = ""
        for dest in  destination.split("/"):
            if not os.path.isdir(buffer + dest + "/") and dest != ".":
                os.mkdir(buffer + dest + "/")
            buffer += dest + "/"

    with open(destination+"/"+filename, "w+") as f:
        f.write(content)

for (dirpath, dirname, filename) in os.walk("."):
    # print(dirpath, dirname, filename)

    ex_num = get_ex_n(dirpath)
    # print("--", ex_num)
    if not ex_num:
        continue

    split_dirs = dirpath.split("/")

    for dir in split_dirs:
        if dir.startswith("delivery"):
            # print(dir)
            for file in filename:
                copy_file(dirpath, file, "./intra-uuid-89a0b761-44c9-4ee4-901d-4628eb288b2e-7792878-mcerquei/"+ex_num)
