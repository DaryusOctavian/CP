def int32(x):
    while x >= 2**31:
        x -= 2**32

    while x < -(2**31):
        x += 2**32

    return x


def main():
    inp = {}
    inp.append([0])
    endn = 0
    while True:
        try:
            line = input().split()
            inp[int(line[0]) // 10] = line[1:]
            endn += 1
        except EOFError:
            break
        if line == "":
            break
    # inp.sort(key=lambda x: x[0])

    vrs = {}
    i = 1
    while not i > endn:
        if inp[i][1] == "LET":
            key = inp[i][2]
            if len(inp[i]) == 5:
                vrs[key] = int(inp[i][4])
            else:
                a = 0
                b = 0
                if inp[i][4].isalpha():
                    a = int(vrs[inp[i][4]])
                else:
                    a = int(inp[i][4])

                if inp[i][6].isalpha():
                    b = int(vrs[inp[i][6]])
                else:
                    b = int(inp[i][6])

                temp = 0
                if inp[i][5] == "+":
                    temp = a + b
                elif inp[i][5] == "-":
                    temp = a - b
                elif inp[i][5] == "*":
                    temp = a * b
                elif inp[i][5] == "/":
                    temp = a // b

                vrs[key] = int32(temp)
            i += 1

        elif inp[i][1] == "IF":
            a = 0
            b = 0
            condres = False
            if inp[i][2].isalpha():
                a = vrs[inp[i][2]]
            else:
                a = int(inp[i][2])
            if inp[i][4].isalpha():
                b = vrs[inp[i][4]]
            else:
                b = int(inp[i][4])

            if inp[i][3] == ">":
                condres = a > b
            elif inp[i][3] == "<":
                condres = a < b
            elif inp[i][3] == ">=":
                condres = a >= b
            elif inp[i][3] == "<=":
                condres = a <= b
            elif inp[i][3] == "=":
                condres = a == b
            elif inp[i][3] == "<>":
                condres = a != b

            if condres:
                i = int(inp[i][7]) // 10
            else:
                i += 1

        elif inp[i][1] == "PRINT" or inp[i][1] == "PRINTLN":
            println = False
            if inp[i][1] == "PRINTLN":
                println = True
            ln = ""
            if inp[i][2][0] != '"':
                print(vrs[inp[i][2]], end="")
            else:
                for j in range(2, len(inp[i])):
                    ln += inp[i][j]
                    ln += " "
                print(ln[1:-2], end="")

            if println:
                print()

            i += 1


main()
