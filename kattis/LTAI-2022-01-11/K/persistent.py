def main():
    n = int(input())
    while n != -1:
        if n < 10:
            print(n + 10)
        else:
            breaks = False
            factors = []
            while n > 9:
                prime = True
                for i in range(9, 2, -1):
                    if n % i == 0:
                        factors.append(i)
                        n //= i
                        prime = False
                        break
                if prime:
                    breaks = True
                    break

            factors.append(n)

            if not breaks:
                factors.sort()
                for i in factors:
                    print(i, end='')
                print()
            else:
                print("There is no such number.")
        n = int(input())


if __name__ == '__main__':
    main()
