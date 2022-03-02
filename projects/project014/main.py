import sys
from math import gcd

p = 1

def lcm(x, y):
    return (x * y) // gcd(x, y)

def flcm(x):
    n = 1
    while True:
        try:
            n = lcm(n, next(x))
        except StopIteration:
            return n

def main():
    for line in sys.stdin:
        print(flcm(map(int, line.split())))

if __name__ == "__main__":
    main()