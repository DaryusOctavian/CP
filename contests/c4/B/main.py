def main():
    tc = int(input())
    for _ in range(tc):
        n = int(input())
        s = input()
        eep = []
        i = n - 1
        while i >= 0:
            if i - 2 >= 0:
                if int(s[i]) == 0:
                    eep.append(int(s[i - 2 : i]))
                    i -= 3
                    continue

            eep.append(int(s[i]))
            i -= 1

        for x in reversed(eep):
            if x > 100:
                x //= 10
            print(chr(x + ord("a") - 1), end="")

        print()


main()
