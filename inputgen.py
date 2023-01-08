import sys


def inputgen():
    crt = 1
    for i in range(100):
        print(crt, end=',')
        crt += i


with open("input.txt", "w") as f:
    sys.stdout = f
    inputgen()
