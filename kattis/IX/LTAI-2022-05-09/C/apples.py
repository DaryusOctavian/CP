def main():
    n, m = input().split()
    n = int(n)
    m = int(m)
    mat = [['0' for j in range(m)] for i in range(n)]
    for i in range(n):
        line = input()
        mat[i] = line

    for j in range(0, m - 1):
        spaces = 0
        for i in range(n - 1, 0):
            if mat[i][j] != ".":
                spaces += 1
            elif mat[i][j] == "#":
                spaces = 0
            elif spaces > 0:
                mat[i][j] = "."
                mat[i + spaces][j] = "a"

    for i in range(n):
        print(mat[i], end='\n')


if __name__ == '__main__':
    main()
