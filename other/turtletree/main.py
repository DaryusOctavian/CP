import turtle as t
import time

t.speed(30)
t.bgcolor("black")
t.color("red")
t.penup()


def drawline(startpos: list[int], len: int, angle: int) -> None:
    t.seth(angle)
    t.goto(startpos[0], startpos[1])
    t.pendown()
    t.forward(len)

    t.penup()
    return


def recurse(depth: int, angle: int) -> None:
    global depth_multiplier, len_multiplier

    if depth == 0:
        return

    crt = [int(t.xcor()), int(t.ycor())]
    drawline(crt, depth * len_multiplier, angle)
    crt = [int(t.xcor()), int(t.ycor())]

    ang1 = angle - (depth * depth_multiplier)
    ang2 = angle + (depth * depth_multiplier)
    ang1 += 360
    ang1 %= 360
    ang2 += 360
    ang2 %= 360

    recurse(depth - 1, ang1)
    t.setpos(crt[0], crt[1])
    recurse(depth - 1, ang2)
    t.setpos(crt[0], crt[1])

    return


def start():
    t.setpos(0, -200)

    depth = 8
    global depth_multiplier, len_multiplier
    depth_multiplier = int(60 // depth)
    len_multiplier = int(100 // depth)

    recurse(depth, 90)

    time.sleep(60)

    return


start()