def nlen(x: int) -> int:
    res = 0
    while (x != 0):
        x //= 10
        res += 1

    return res


def nrev(x: int) -> int:
    cp = x
    x = 0

    while (cp > 0):
        x *= 10
        x += cp % 10
        cp //= 10

    return x


def main():
    tc = int(input())
    for _ in range(tc):
        n = int(input())

        res = []
        for _ in range(n):
            inp = input().split(":")
            name = inp[0]
            inp[1] = inp[1][1:-6]
            crt = 0
            for e in inp[1].split("-"):
                crt *= 10
                if (e == "upper"):
                    crt += 1
                elif (e == "middle"):
                    crt += 2
                else:
                    crt += 3

            res.append([crt, name])

        for x in res:
            x[0] = nrev(x[0])

            for i in range(101 - nlen(x[0])):
                x[0] *= 10
                x[0] += 2

        res.sort()

        for x in res:
            print(x[1])
        print("==============================")


main()
