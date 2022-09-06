global res
global ar
global best
best = []
global exc


def solve(n, pos, sol, ar, exc, res):
    if pos == n:
        for x in exc:
            for y in range(0, len(sol) - 1):
                if sol[y] == x and sol[y + 1] == x:
                    return

        res += 1
        if res == 1:
            for x in sol:
                best.append(x)
        return

    for x in ar:
        if x not in sol:
            sol.append(x)
            solve(n, pos + 1, sol, ar, exc, res)
            sol.pop()


def main():
    tc = int(input())
    for _ in range(tc):
        res = 0
        n = int(input())
        ar = input().split()
        sol = []
        best = []
        pos = 0
        tmp = int(input())
        exc = []
        for _ in range(tmp):
            eep = input().split()
            exc.append(eep)
        solve(n, pos, sol, ar, exc, res)
        print(res)
        for x in best:
            print(x, end=' ')
        print()


if __name__ == '__main__':
    main()
