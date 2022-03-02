def main():
    n = int(input())
    x = 1
    pow = 1
    while n > 0:
        x *= 10
        x += n % 2
        n //= 2

    while x > 1:
        n += (x % 10) * pow
        pow *= 2
        x //= 10

    print(n)

if __name__ == "__main__":
    main()