def main():
    n = int(input())
    for _ in range(n):
        a = input()
        b = input()
        print(a, end="\n")
        print(b, end="\n")
        for i in range(len(a)):
            if a[i] != b[i]:
                print("*", end="")
            else:
                print(".", end="")
        print("\n")


if __name__ == "__main__":
    main()
