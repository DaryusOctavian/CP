def main():
    pre = {
        "G": 0,
        "F": 1,
        "E": 2,
        "D": 3,
        "C": 4,
        "B": 5,
        "A": 6,
        "g": 7,
        "f": 8,
        "e": 9,
        "d": 10,
        "c": 11,
        "b": 12,
        "a": 13
    }

    _ = int(input())
    a = input().split()

    res = [[] for e in range(14)]

    time = 0
    for e in a:
        n = 1
        if len(e) > 1:
            n = int(e[1:])

        for i in range(time, time + n):
            res[pre[e[0]]].append(i)

        time += n + 1
        n = 1

    time -= 1

    for x, y in pre.items():
        print(f"{x}: ", end="")

        i = 0
        for e in range(time):
            found = False
            if i < len(res[y]):
                if res[y][i] == e:
                    print("*", end="")
                    i += 1
                    found = True

            if not found:
                if x in ["F", "D", "B", "g", "e", "a"]:
                    print("-", end="")
                else:
                    print(" ", end="")

        print()


main()
