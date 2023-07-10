def main():
    im = []
    nums = [
        [
            "xxxxx",
            "x...x",
            "x...x",
            "x...x",
            "x...x",
            "x...x",
            "xxxxx"
        ],
        [
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x"
        ],
        [
            "xxxxx",
            "....x",
            "....x",
            "xxxxx",
            "x....",
            "x....",
            "xxxxx"
        ],
        [
            "xxxxx",
            "....x",
            "....x",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"
        ],
        [
            "x...x",
            "x...x",
            "x...x",
            "xxxxx",
            "....x",
            "....x",
            "....x"
        ],
        [
            "xxxxx",
            "x....",
            "x....",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"
        ],
        [
            "xxxxx",
            "x....",
            "x....",
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx"
        ],
        [
            "xxxxx",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x"
        ],
        [
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx"
        ],
        [
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"
        ]
    ]
    for _ in range(7):
        im.append(input())

    idx = 0
    a, b = 0, 0
    while True:
        found = False
        for x in range(10):
            okay = True
            for i in range(7):
                if im[i][idx * 6:idx * 6 + 5] != nums[x][i]:
                    okay = False
                    break

            if okay:
                found = True
                a *= 10
                a += x
                break

        if not found:
            a, b = b, a

        idx += 1
        if 6 * idx >= len(im[0]):
            break

    crt = a + b
    cres = 1
    while crt > 0:
        cres *= 10
        cres += crt % 10
        crt //= 10

    for i in range(7):
        res = cres
        while res > 1:
            if res != cres:
                print(".", end="")
            for x in nums[res % 10][i]:
                print(x, end="")
            res //= 10
        print()


if __name__ == "__main__":
    main()
