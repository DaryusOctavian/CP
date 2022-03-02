import sys

for line in sys.stdin:
    nm = line.split()
    n = int(nm[0])
    m = int(nm[1])

    fact = 1
    for i in range(1, n + 1):
        fact *= i

    n = str(n)
    n += '!'
    if fact % m == 0:
        print(m, "divides", n)
    else:
        print(m, "does not divide", n)

# works but TLE