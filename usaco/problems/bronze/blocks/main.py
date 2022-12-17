def main():
    n = int(input())
    l = [input() for _ in range(4)]
    words = set()
    for a in range(4):
        for b in range(4):
            if a in [b]:
                continue
            for c in range(4):
                if c in [a, b]:
                    continue
                for d in range(4):
                    if d in [a, b, c]:
                        continue
                    for l1 in l[a]:
                        words.add(l1)
                        for l2 in l[b]:
                            words.add(l1 + l2)
                            for l3 in l[c]:
                                words.add(l1 + l2 + l3)
                                for l4 in l[d]:
                                    words.add(l1 + l2 + l3 + l4)
    for _ in range(n):
        print("YES" if input() in words else "NO")


main()
