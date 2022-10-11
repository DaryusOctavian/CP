import sys

def inputgen():
    print("50 50")
    for _ in range(50):
        for _ in range(50):
            print("L", end='')
        print()



with open("input.txt", "w") as f:
    sys.stdout = f
    inputgen()
