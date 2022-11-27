def main():
    names = input().split()

    n = int(input())
    for _ in range(n):
        inp = input().split()

        a, b = 0, 0
        found, cnt = 0, 0
        s1, s2 = 0, 0
        for ep in inp:
            cnt += 1

            e = ep.split(':')
            x = int(e[0])
            y = int(e[1])

            s1 += x
            s2 += y

            if x - y > 1 and x >= 6:
                a += 1
            elif x - y < -1 and y >= 6:
                b += 1

            if a >= 2 or b >= 2:
                found += 1
            elif (a + b == 1 and cnt == 3):
                found += 1
            elif (a + b == 0 and abs(s1 - s2) == 2) and cnt == 2:
                found += 1

        if names[0] == "federer" and b != 0:
            print("ne")
            continue
        elif names[1] == "federer" and a != 0:
            print("ne")
            continue
        elif found == 1:
            print("da")
        else:
            print("ne")


main()