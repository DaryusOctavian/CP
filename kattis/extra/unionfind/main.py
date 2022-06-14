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
    n, q = map(int, input().split())
    global udjs, rank, subsets
    udjs = []
    rank = []
    subsets = 0

    initudjs(n)
    for _ in range(q):
        op, a, b = input().split()
        a = int(a)
        b = int(b)

        if op == "?":
            if findparent(a) == findparent(b):
                print("yes")
            else:
                print("no")

        elif op == "=":
            union(a, b)


main()
