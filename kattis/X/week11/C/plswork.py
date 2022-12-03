def main():
    names = input().split()

    n = int(input())

    for _ in range(n):
        e = input().split()

        x, y = 0, 0
        cnt = 0
        bad = False
        for ep in e:
            cnt += 1
            a, b = ep.split(":")
            a = int(a)
            b = int(b)

            if a == 7 and b == 6:
                if cnt < 3:
                    x += 1
                    continue
                else:
                    bad = True
                    break
            if a == 6 and b == 7:
                if cnt < 3:
                    y += 1
                    continue
                else:
                    bad = True
                    break

            if max(a, b) == 6:
                if (abs(a - b) >= 2):
                    if (a > b):
                        x += 1
                    else:
                        y += 1
            elif max(a, b) > 6:
                if (abs(a - b) == 2):
                    if (a > b):
                        x += 1
                    else:
                        y += 1

        if bad:
            print("ne")
        elif len(e) > 3 or len(e) < 2:
            print("ne")
        elif y > 0 and names[0] == "federer":
            print("ne")
        elif x > 0 and names[1] == "federer":
            print("ne")
        elif x == 2 and (y == 1 or y == 0):
            print("da")
        elif y == 2 and (x == 1 or x == 0):
            print("da")
        else:
            print("ne")


main()