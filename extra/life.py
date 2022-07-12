import pygame, random


def check():
    global inert

    nzxt = []
    for i in range(height):
        temp = []

        for j in range(width):
            nhb = [0, 0]
            if i > 0:
                if inert[i - 1][j]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1
            if j > 0:
                if inert[i][j - 1]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1
            if i < height - 1:
                if inert[i + 1][j]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1
            if j < width - 1:
                if inert[i][j + 1]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1

            if i > 0 and j > 0:
                if inert[i - 1][j - 1]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1
            if i > 0 and j < width - 1:
                if inert[i - 1][j + 1]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1
            if i < height - 1 and j < width - 1:
                if inert[i + 1][j + 1]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1
            if i < height - 1 and j > 0:
                if inert[i + 1][j - 1]:
                    nhb[1] += 1
                else:
                    nhb[0] += 1

            if inert[i][j]:
                if not (nhb[1] > 1 and nhb[1] < 4):
                    temp.append(False)
                else:
                    temp.append(True)
            else:
                if nhb[1] == 3:
                    temp.append(True)
                else:
                    temp.append(False)
        nzxt.append(temp)

    return nzxt


def addrm(x, y, add):
    global inert, rectsz

    inert[x // rectsz][y // rectsz] = add


def draw():
    global screen, height, width, inert, rectsz
    screen.fill((0, 0, 0))

    for i in range(height):
        for j in range(width):
            if inert[i][j]:
                pygame.draw.rect(
                    screen,
                    (144, 0, 255),
                    (j * rectsz, i * rectsz, rectsz - 1, rectsz - 1),
                )
            else:
                pygame.draw.rect(
                    screen,
                    (25, 25, 25),
                    (j * rectsz, i * rectsz, rectsz - 1, rectsz - 1),
                )

    pygame.display.flip()


def initialize():
    global screen, height, width, inert, rectsz

    pygame.init()
    rectsz = 10
    height = 50
    width = 70
    screen = pygame.display.set_mode((width * rectsz, height * rectsz))

    inert = []
    for _ in range(height):
        temp = []
        for _ in range(width):
            eep = random.randint(1, 8)
            if eep == 1:
                temp.append(True)
            else:
                temp.append(False)
        inert.append(temp)

    draw()


running = True
constant = False
initialize()
global inert
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RETURN:
                constant = not constant
            if constant:
                inert = check()
                draw()
                continue
            if event.key == pygame.K_ESCAPE:
                running = False
            elif event.key == pygame.K_SPACE:
                inert = check()
                draw()
        elif event.type == pygame.MOUSEBUTTONDOWN:
            x, y = pygame.mouse.get_pos()
            if event.button == 1:
                addrm(y, x, True)
            elif event.button == 3:
                addrm(y, x, False)

        draw()
