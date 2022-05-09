def main():
    n, t = input().split()
    n = int(n)
    t = int(t)

    a = input().split()
    a = [int(i) for i in a]

    if t == 1:
        print("7\n")

    elif t == 2:
        if a[0] > a[1]:
            print("Bigger\n")
        elif a[0] < a[1]:
            print("Smaller\n")
        else:
            print("Equal\n")

    elif t == 3:
        mx = max(max(a[0], a[1]), a[2])
        mn = min(min(a[0], a[1]), a[2])
        print(a[0] + a[1] + a[2] - mx - mn, end="\n")

    elif t == 4:
        s = 0
        for x in a:
            s += x
        print(s, end="\n")

    elif t == 5:
        s = 0
        for x in a:
            if x % 2 == 0:
                s += x
        print(s, end="\n")

    elif t == 6:
        for x in a:
            x %= 26
            print(chr(x + 97), end="")
        print("\n")

    elif t == 7:
        i = 0
        count = 0
        while True:
            i = a[i]
            if i >= n:
                print("Out\n")
                break
            elif i == n - 1:
                print("Done\n")
                break
            elif count > 2 * n:
                print("Cyclic\n")
                break

            count += 1


if __name__ == "__main__":
    main()
