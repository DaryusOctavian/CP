def initudjs(n):
    global udjs, rank, subsets

    for i in range(n):
        udjs.append(i)
        rank.append(0)
        subsets += 1


def findparent(x):
    global udjs
    temp = x

    while udjs[x] != x:
        x = udjs[x]

    if x != temp:
        udjs[temp] = x

    return x


def union(x, y):
    global udjs, rank, subsets

    parentx = findparent(x)
    parenty = findparent(y)

    if parentx == parenty:
        return parentx
    else:
        subsets -= 1
        if rank[parentx] > rank[parenty]:
            udjs[parenty] = parentx
            rank[parentx] += 1
            return parentx
        else:
            udjs[parentx] = parenty
            rank[parenty] += 1
            return parenty


def main():
    while True:
        n = int(input())
        if n == -1:
            return
        rings = []
        for _ in range(n):
            a, b, c = map(float, input().split())
            rings.append([a, b, c])

        global udjs, rank, subsets
        udjs = []
        rank = []
        subsets = 0
        initudjs(n)

        for i in range(n):
            for j in range(n):
                dst = (rings[i][0] - rings[j][0]) ** 2 + (
                    rings[i][1] - rings[j][1]
                ) ** 2
                dst = dst**0.5

                if dst <= rings[i][2] + rings[j][2] and (
                    dst >= abs(rings[i][2] - rings[j][2])
                ):
                    union(i, j)

        res = {}
        for x in udjs:
            if x not in res:
                res[x] = 0
            res[x] += 1

        mx = 0
        for k in res:
            mx = max(mx, res[k])

        print("The largest component contains", mx, end=" ")
        if mx == 1:
            print("ring.")
        else:
            print("rings.")


main()
