def main():
    names = input().split()

    n = int(input())
    for _ in range(n):
        inp = input().split()
        if len(inp) < 2 or len(inp) > 3:
            print("ne")
            continue

        bad = False
        x, y = 0, 0
        cnt = 0
        for e in inp:
            cnt += 1
            a, b = e.split(":")
            a = int(a)
            b = int(b)

            if not (a >= 6 or b >= 6):
                bad = True
                break
            if (a > 6 or b > 6) and abs(a - b) > 2:
                bad = True
                break

            if abs(a - b) > 1:
                if (a > b):
                    x += 1
                else:
                    y += 1
            elif (a + b) == 13:
                if a == 7 and b == 6 and cnt < 3:
                    x += 1
                elif a == 6 and b == 7 and cnt < 3:
                    y += 1

        if bad:
            print("ne")
            continue

        if x == 1 and y == 1:
            print("ne")
            continue
        elif x == 3 and y == 0 or x == 0 and y == 3:
            print("ne")
            continue
        elif x == 1 and y == 2 or x == 2 and y == 1:
            print("da")
            continue
        elif names[0] == "federer" and y != 0:
            print("ne")
            continue
        elif names[1] == "federer" and x != 0:
            print("ne")
            continue
        elif x == 2 and y == 0 or x == 0 and y == 2:
            print("da")
            continue


main()