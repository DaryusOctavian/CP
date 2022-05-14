def main():
    n = int(input())
    a = []
    b = []
    for x in input().split():
        a.append(int(x))

    m = {}
    for x in a:
        if x not in m:
            m[x] = 1
        else:
            m[x] += 1

    for k, v in m.items():
        if v % 2 == 1:
            print("Impossible")
            return

    res = 0
    while len(a) > 0 or len(b) > 0:
        if len(a) > len(b):
            while True:
                if len(a) > 0 and len(b) > 0:
                    if a[-1] == b[-1]:
                        a.pop()
                        b.pop()
                        res += 1
                        break

                if not (len(a) > 0 or len(b) > 0):
                    break
                else:
                    if (len(a) > 0):
                        b.append(a[-1])
                        a.pop()
                        res += 1
                    else:
                        break

        else:
            while True:
                if len(a) > 0 and len(b) > 0:
                    if a[-1] == b[-1]:
                        a.pop()
                        b.pop()
                        res += 1
                        break

                if not (len(a) > 0 or len(b) > 0):
                    break
                else:
                    if (len(b) > 0):
                        a.append(b[-1])
                        b.pop()
                        res += 1
                    else:
                        break

    if (res > 1e7):
        print("Impossible")
        return

    print(res)


if __name__ == '__main__':
    main()

# tle
