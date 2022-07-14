def inputgen():
    print(100)
    print(1, end=" ")
    for _ in range(99):
        print(0, end=" ")
    print()
    for i in range(99):
        print(i + 2, end=" ")
        print(1, end=" ")
        print(i + 1)


inputgen()
