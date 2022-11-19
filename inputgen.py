import sys

def inputgen():
    for _ in range(50):
        print("Yes", end="")



with open("input.txt", "w") as f:
    sys.stdout = f
    inputgen()
