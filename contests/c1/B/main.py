def main():
    tc = int(input())
    for _ in range(tc):
        n = int(input())
        ln = input()
        res = {}
        for cr in ln:
            if cr in res:
                res[cr] += 1
            else:
                res[cr] = 2

        sm = 0
        for k, v in res.items():
            sm += v

        print(sm)


main()
