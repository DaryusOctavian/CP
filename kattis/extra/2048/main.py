def main():
    mp = []
    for i in range(4):
        a, b, c, d = map(int, input().split())
        psb = [[a, False], [b, False], [c, False], [d, False]]
        mp.append(psb)
    turn = int(input())

    if turn == 0:
        for i in range(4):
            for e in range(4):
                x = i
                while x > 0:
                    if mp[e][x - 1][0] == 0:
                        mp[e][x - 1][0] = mp[e][x][0]
                        mp[e][x][0] = 0
                        x -= 1
                    elif (
                        mp[e][x - 1][0] == mp[e][x][0]
                        and mp[e][x - 1][1] == False
                        and mp[e][x][1] == False
                    ):
                        mp[e][x - 1][0] *= 2
                        mp[e][x - 1][1] += True
                        mp[e][x][0] = 0
                        x -= 1
                    else:
                        break

    elif turn == 1:
        for i in range(4):
            for e in range(4):
                x = i
                while x > 0:
                    if mp[x - 1][e][0] == 0:
                        mp[x - 1][e][0] = mp[x][e][0]
                        mp[x][e][0] = 0
                        x -= 1
                    elif (
                        mp[x - 1][e][0] == mp[x][e][0]
                        and mp[x - 1][e][1] == False
                        and mp[x][e][1] == False
                    ):
                        mp[x - 1][e][0] *= 2
                        mp[x - 1][e][1] += True
                        mp[x][e][0] = 0
                        x -= 1
                    else:
                        break

    elif turn == 2:
        for i in range(3, -1, -1):
            for e in range(4):
                x = i
                while x < 3:
                    if mp[e][x + 1][0] == 0:
                        mp[e][x + 1][0] = mp[e][x][0]
                        mp[e][x][0] = 0
                        x += 1
                    elif (
                        mp[e][x + 1][0] == mp[e][x][0]
                        and mp[e][x + 1][1] == False
                        and mp[e][x][1] == False
                    ):
                        mp[e][x + 1][0] *= 2
                        mp[e][x + 1][1] += True
                        mp[e][x][0] = 0
                        x += 1
                    else:
                        break

    elif turn == 3:
        for i in range(3, -1, -1):
            for e in range(4):
                x = i
                while x < 3:
                    if mp[x + 1][e][0] == 0:
                        mp[x + 1][e][0] = mp[x][e][0]
                        mp[x][e][0] = 0
                        x += 1
                    elif (
                        mp[x + 1][e][0] == mp[x][e][0]
                        and mp[x + 1][e][1] == False
                        and mp[x][e][1] == False
                    ):
                        mp[x + 1][e][0] *= 2
                        mp[x + 1][e][1] += True
                        mp[x][e][0] = 0
                        x += 1
                    else:
                        break

            # for ii in range(4):
            #     for jj in range(4):
            #         mp[ii][jj] //= 2
            #         mp[ii][jj] *= 2

    for i in range(4):
        for j in range(4):
            print(mp[i][j][0], end=" ")
        print()


main()
