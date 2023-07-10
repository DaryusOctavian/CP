import random


with open("input.txt", "w") as file:
    n = int(input())
    file.write(str(n) + "\n")
    for _ in range(n):
        file.write(str(random.randint(1, n)) + " ")

    file.write("\n")
