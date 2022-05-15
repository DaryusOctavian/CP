def main():
    tc = int(input())
    for _ in range(tc):
        a, b, c = input().split()
        rate = float(a) * 100.0 + 0.5
        debt = float(b) * 100.0 + 0.5
        payment = float(c) * 100.0 + 0.5
        res = 0
        while debt > 0:
            debt += (debt * rate) / 10000
            if (debt * rate) % 10000 >= 5000:
                debt += 1
            debt -= payment
            res += 1
            if res > 1200:
                print("impossible")
                break

        if res <= 1200:
            print(res)


if __name__ == '__main__':
    main()
