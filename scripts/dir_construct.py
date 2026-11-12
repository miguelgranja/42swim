import os


dir_name = input("dir: ")
ex_num = input("number of ex: ")

script_dir = os.path.dirname(os.path.abspath(__file__))
parent_dir = os.path.dirname(script_dir)
parent_path = os.path.join(parent_dir, dir_name)


def parent_dir(dir_name):
    os.mkdir(parent_path)


def children_slave(dir_namem, ex_num):
    for n in range(ex_num):
        os.makedirs(parent_path + "/" + ("ex" if n >= 10 else "ex0" ) + str(n) + "/delivery", exist_ok=True) 


parent_dir(dir_name)
children_slave(dir_name, int(ex_num))
