from sys import stdin


def main():
    day = 0
    alice = 0
    sam = 0
    while True:
        # line = line.split()
        # line = stdin.readline().split()
        # if line == "" or line == "\n":
        #     break
        try:
            line = input()
            if line == "" or line == "\n":
                print("Day {}".format(day))
                print("Alice ${}".format(alice))
                print("Sam ${}".format(sam))
                alice = 0
                sam = 0
                print("\n")
                break

            line = line.split()

            if line == "OPEN":
                day += 1
            elif line == "CLOSE":
                print("Day {}".format(day))
                print("Alice ${}".format(alice))
                print("Sam ${}".format(sam))
                alice = 0
                sam = 0
                print("\n")

            else:
                if line[0] == "ENTER":
                    if line[1] == "ALICE":
                        alice -= int(line[2])
                    else:
                        sam -= int(line[2])

                elif line[0] == "EXIT":
                    if line[1] == "ALICE":
                        alice += int(line[2])
                    else:
                        sam += int(line[2])
        except EOFError:
            break


if __name__ == "__main__":
    main()
