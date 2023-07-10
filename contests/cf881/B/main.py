def main():
    tc = int(input())
    for _ in range(tc):
        n = int(input())
        v = [int(x) for x in input().split()]
        to_change = []

        for e in v:
            if e == 0:
                continue
