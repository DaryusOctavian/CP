def main():
    n = int(input())
    for _ in range(n):
        s = input().split()
        if len(s) > 1 and s[0] == "simon" and s[1] == "says":
            for x in s[2:]:
                print(x, end=" ")
        print()


main()
