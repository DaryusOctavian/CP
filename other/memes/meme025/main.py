def solve(n, pos, sol):
    if pos == n:
        for x in sol:
            print(x, end=' ')
        print()
        return

    for i in range(1, n + 1):
        if i not in sol:
            sol.append(i)
            solve(n, pos + 1, sol)
            sol.pop()


def main():
    n = int(input())
    sol = []
    pos = 0
    solve(n, pos, sol)


if __name__ == '__main__':
    main()
