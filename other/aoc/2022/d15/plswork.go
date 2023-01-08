package main

import "fmt"

type Sensor struct {
	posX            int64
	posY            int64
	beaconX         int64
	beaconY         int64
	distanceBetween int64
}

func abs(x int64) int64 {
	if x < 0 {
		return -x
	}
	return x
}

func manhattanDistance(x, y, i, j int64) int64 {
	return abs(x-i) + abs(y-j)
}

func main() {
	var sensors []Sensor
	var wantedY int64 = 10
	var pointsOnLine = make(map[int64]int64)
	for {
		var x, y, i, j int64 = 0, 0, 0, 0
		fmt.Scanf("Sensor at x=%d, y=%d: closest beacon is at x=%d, y=%d", &x, &y, &i, &j)
		if x == 0 && y == 0 && i == 0 && j == 0 {
			break
		}

		distanceBetweenPoints := manhattanDistance(x, y, i, j)
		sensors = append(sensors, Sensor{x, y, i, j, distanceBetweenPoints})

		// fmt.Println(x, y, i, j, distanceBetweenPoints)

		var crt int64 = distanceBetweenPoints - abs(wantedY-y)
		var e int64 = 0
		for e <= crt {
			pointsOnLine[x+e] = 1
			pointsOnLine[x-e] = 1
			e++
		}
		// fmt.Println(pointsOnLine)
	}

	// fmt.Println(pointsOnLine)

	var res int64 = 0
	for _, v := range pointsOnLine {
		res += v
	}
	fmt.Printf("%d\n", res)

	for _, e := range sensors {
		if e.beaconY == wantedY {
			pointsOnLine[e.beaconX] = 0
		}
	}

	res = 0
	for _, v := range pointsOnLine {
		res += v
	}
	fmt.Printf("%d\n", res)
}
