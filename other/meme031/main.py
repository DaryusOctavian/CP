def main():
    n = int(input())
    a = input()
    b = input()

    if n % 2 == 0:
        for i in range(len(a)):
            if a[i] != b[i]:
                print("Deletion failed")
                return
    else:
        for i in range(len(a)):
            if a[i] == b[i]:
                print("Deletion failed")
                return

    print("Deletion succeeded")


if __name__ == "__main__":
    main()
