def main():
    n, t = input().split()
    n = int(n)
    t = int(t)

    v = input().split()
    v = [int(x) for x in v]

    m = {}

    if t == 1:
        for x in v:
            if 7777 - x in m:
                print("Yes")
                return
            elif x not in m:
                m[x] = True

        print("No")

    elif t == 2:
        unique = True
        for x in v:
            if x in m:
                unique = False
                break

            m[x] = True

        if unique:
            print("Unique")
        else:
            print("Contains duplicate")

    elif t == 3:
        for x in v:
            if x not in m:
                m[x] = 0
            m[x] += 1

        for k, v in m.items():
            if v > n // 2:
                print(k)
                return
        print(-1)

    elif t == 4:
        v.sort()
        if n % 2 == 0:
            print(v[n // 2 - 1], end=" ")
        print(v[n // 2])

    elif t == 5:
        v.sort()

        for x in v:
            if x >= 100 and x <= 999:
                print(x, end=" ")


if __name__ == "__main__":
    main()
