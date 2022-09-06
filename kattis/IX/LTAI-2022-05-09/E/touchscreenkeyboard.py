coords = {}


def dist(key1, key2):
    x1, y1 = coords[key1]
    x2, y2 = coords[key2]
    return abs(x1 - x2) + abs(y1 - y2)


def main():
    layout = ["qwertyuiop",
              "asdfghjkl",
              "zxcvbnm"]
    tc = int(input())
    for _ in range(tc):
        s, n = input().split()
        n = int(n)
        lst = []
        for _ in range(n):
            lst.append(input())

        for i, k in enumerate(layout):
            for j, c in enumerate(k):
                coords[c] = (i, j)

        crt = []
        for line in lst:
            eep = 0
            for i in range(len(s)):
                eep += dist(s[i], line[i])

            crt.append((eep, line))

        crt.sort()

        for e, line in crt:
            print(line, end=" ")
            print(e)


if __name__ == '__main__':
    main()
