def main():
    n = int(input())
    arr = []
    for _ in range(n):
        a, b = input().split()
        a = int(a)
        b = int(b)
        arr.append(a + b)

    arr.sort()

    res = 0
    for i in range(n - 1, -1, -1):
        res += (i * arr[i]) - (n - i - 1) * arr[i]

    print(res)


main()
