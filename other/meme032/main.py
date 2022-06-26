from sys import stdin


def main():
    for line in stdin:
        if line.strip() == "":
            break

        ln = line.split()
        ln = [int(x) for x in ln]

        for i in range(len(ln)):
            s = 0
            for j in range(len(ln)):
                if i != j:
                    s += ln[j]

            if s == ln[i]:
                print(ln[i])
                break


if __name__ == "__main__":
    main()
