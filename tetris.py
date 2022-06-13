import pygame
import random

colors = [
    (25, 25, 25),
    (240, 230, 80),
    (120, 190, 150),
    (230, 60, 60),
    (75, 150, 240),
    (250, 190, 70),
    (230, 100, 100),
    (120, 120, 180),
]

pieces = [
    [
        [
            [0, 0, 0, 0],
            [0, 1, 1, 0],
            [0, 1, 1, 0],
            [0, 0, 0, 0],
        ],
    ],
    [
        [
            [0, 0, 0, 0],
            [2, 2, 2, 2],
            [0, 0, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 2, 0, 0],
            [0, 2, 0, 0],
            [0, 2, 0, 0],
            [0, 2, 0, 0],
        ],
    ],
    [
        [
            [0, 0, 0, 0],
            [0, 3, 3, 0],
            [3, 3, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [3, 0, 0, 0],
            [3, 3, 0, 0],
            [0, 3, 0, 0],
            [0, 0, 0, 0],
        ],
    ],
    [
        [
            [0, 0, 0, 0],
            [4, 4, 0, 0],
            [0, 4, 4, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 4, 0, 0],
            [4, 4, 0, 0],
            [4, 0, 0, 0],
            [0, 0, 0, 0],
        ],
    ],
    [
        [
            [0, 0, 0, 0],
            [5, 5, 5, 0],
            [5, 0, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 5, 0, 0],
            [0, 5, 0, 0],
            [0, 5, 5, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 0, 5, 0],
            [5, 5, 5, 0],
            [0, 0, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [5, 5, 0, 0],
            [0, 5, 0, 0],
            [0, 5, 0, 0],
            [0, 0, 0, 0],
        ],
    ],
    [
        [
            [0, 0, 0, 0],
            [6, 6, 6, 0],
            [0, 0, 6, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 6, 0, 0],
            [0, 6, 0, 0],
            [6, 6, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [6, 0, 0, 0],
            [6, 6, 6, 0],
            [0, 0, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 6, 6, 0],
            [0, 6, 0, 0],
            [0, 6, 0, 0],
            [0, 0, 0, 0],
        ],
    ],
    [
        [
            [0, 0, 0, 0],
            [7, 7, 7, 0],
            [0, 7, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 7, 0, 0],
            [0, 7, 7, 0],
            [0, 7, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 7, 0, 0],
            [7, 7, 7, 0],
            [0, 0, 0, 0],
            [0, 0, 0, 0],
        ],
        [
            [0, 7, 0, 0],
            [7, 7, 0, 0],
            [0, 7, 0, 0],
            [0, 0, 0, 0],
        ],
    ],
]


def initialize():
    global width, height, screen, inert, piece, rotation, x, y, lsttime, pieceq, moved

    pygame.init()
    width = 25 * 15
    height = 25 * 20
    screen = pygame.display.set_mode((width, height))
    inert = []
    for i in range(10):
        inert.append([])
        for _ in range(20):
            inert[i].append(0)
    piece = 6
    rotation = 0
    lsttime = pygame.time.get_ticks()
    x = 0
    y = 0
    pieceq = []
    for i in range(4):
        pieceq.append(random.randint(0, len(pieces) - 1))
    moved = False
    draw()


def checktime():
    global lsttime, y
    dt = pygame.time.get_ticks() - lsttime
    if dt > 1000:
        lsttime = pygame.time.get_ticks()
        if canmove(x, y + 1, rotation):
            y += 1
        draw()


def canmove(testx, testy, testrot):
    global piece

    for i in range(4):
        for j in range(4):
            if pieces[piece][testrot][i][j] != 0:
                if testx + j < 0 or testx + j >= 10 or testy + i >= 20:
                    return False
                if inert[testx + j][testy + i] != 0:
                    return False
    return True


def draw():
    global piece, rotation, x, y
    # rotation += 1
    # rotation += len(pieces[piece]) % len(pieces[piece])

    screen.fill((0, 0, 0))
    for i in range(10):
        for j in range(20):
            color = colors[inert[i][j]]
            pygame.draw.rect(screen, color, (i * 25, j * 25, 24, 24))

    for i in range(4):
        for j in range(4):
            if pieces[piece][rotation][i][j] != 0:
                color = colors[pieces[piece][rotation][i][j]]
                pygame.draw.rect(screen, color, ((x + i) * 25, (y + j) * 25, 24, 24))

    idk1 = 11
    idk2 = 21
    for k in range(4):
        idk2 -= 5
        temppiece = pieceq[k]
        for i in range(idk1, idk1 + 4):
            for j in range(idk2, idk2 + 4):
                color = colors[pieces[temppiece][0][i - idk1][j - idk2]]
                if color != ((25, 25, 25)):
                    pygame.draw.rect(screen, color, (i * 25, j * 25, 24, 24))

    # rotation -= 1
    pygame.display.flip()


initialize()
running = True
while running:
    # game()
    checktime()
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_x:
                testrot = (rotation + 1) % len(pieces[piece])
                if canmove(x, y, testrot):
                    rotation = testrot

            if event.key == pygame.K_z:
                testrot = ((rotation - 1) + len(pieces[piece])) % len(pieces[piece])
                if canmove(x, y, testrot):
                    rotation = testrot

            if event.key == pygame.K_LEFT:
                if canmove(x - 1, y, rotation):
                    x -= 1

            if event.key == pygame.K_RIGHT:
                if canmove(x + 1, y, rotation):
                    x += 1

            if event.key == pygame.K_DOWN:
                if canmove(x, y + 1, rotation):
                    y += 1

            # if event.key == pygame.K_space:
            #     drop()

            # if rotation < 0:
            #     rotation = len(pieces[piece]) - 1

            # if rotation > len(pieces[piece]) - 1:
            #     rotation = 0

        checktime()
        draw()
