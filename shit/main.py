from ctypes import *
from pathlib import Path
from datetime import datetime

so_file = Path("./my_functions.so").resolve()
my_functions = CDLL(so_file)


my_functions.square(1_000_000)

start = datetime.now()

tt = 0
for i in range(1_000_000):
    tt += i
print("Python time: ", datetime.now() - start)