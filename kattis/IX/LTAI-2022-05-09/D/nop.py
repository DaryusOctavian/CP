def main():
    s = input()
    a = 0
    res = 0
    for x in s:
        if x.isupper():
            while not a % 4 == 0:
                a += 1
                res += 1

        a += 1

    print(res)


if __name__ == '__main__':
    main()
