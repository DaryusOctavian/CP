def main():
    tc = int(input())
    for _ in range(tc):
        ln = input()
        good = True
        if not (ln[0] == "Y" or ln[0] == "y"):
            good = False
        if not (ln[1] == "E" or ln[1] == "e"):
            good = False
        if not (ln[2] == "S" or ln[2] == "s"):
            good = False

        if good:
            print("YES")
        else:
            print("NO")


main()
