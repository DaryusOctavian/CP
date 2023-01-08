from time import time_ns
import re
from collections import defaultdict
from itertools import combinations


def manhattan_distance(x1, y1, x2, y2):
    return abs(x1 - x2) + abs(y1 - y2)


def read_input():
    sensor_data = []
    with open(f"input.txt") as f:
        data = f.read().splitlines()
        for line in data:
            sx, sy, bx, by = map(int, re.findall(r"([\-\d]+)", line))
            sensor_data.append(
                (sx, sy, bx, by, manhattan_distance(sx, sy, bx, by)))

    return sensor_data


def query_sensors(sensor_data, row):
    scanned_positions = set()

    for sx, sy, bx, by, mdist in sensor_data:
        md = manhattan_distance(sx, sy, sx, row)

        if md <= mdist:
            bloc = (bx, by)
            for x in range(sx - (mdist - md), sx + (mdist - md) + 1):
                if (x, row) != bloc:
                    scanned_positions.add(x)

    return len(scanned_positions)


def bounds_add(s, x, y):
    if x >= 0 and x <= 4000000 and y >= 0 and y <= 4000000:
        s.add((x, y))


def periphery(sensor):
    p = set()
    # return the list of points on the periphery of the sensor
    sx, sy, _, _, mdist = sensor
    for i in range(mdist + 2):
        bounds_add(p, sx - mdist - 1 + i, sy - i)
        bounds_add(p, sx + mdist + 1 - i, sy - i)
        bounds_add(p, sx - mdist - 1 + i, sy + i)
        bounds_add(p, sx + mdist + 1 - i, sy + i)
    return p


def is_inside(sensor_data, x, y):
    for sx, sy, _, _, mdist in sensor_data:
        if manhattan_distance(sx, sy, x, y) <= mdist:
            return True
    return False


def find_gaps(sensor_data):
    peripheries = {}
    candidates = defaultdict(int)

    for s in sensor_data:
        peripheries[s] = periphery(s)

    # intersection of sensor peripheries
    for s1, s2 in combinations(sensor_data, 2):
        # print (s1, s2, s3, s4)
        p1, p2 = peripheries[s1], peripheries[s2]
        z = p1.intersection(p2)
        if z:
            for zz in z:
                candidates[zz] += 1

    # find the candidate with the most sensors
    for c in candidates:
        if candidates[c] >= 4:
            if not is_inside(sensor_data, *c):
                return c[0] * 4000000 + c[1]

    return 0


sensor_data = read_input()

start = time_ns()
part1 = query_sensors(sensor_data, 2000000)
print(f"Part 1: {part1} in {(time_ns() - start)/1e6}ms")

start = time_ns()
part2 = find_gaps(sensor_data)
print(f"Part 2: {part2} in {(time_ns() - start)/1e9}s")
