package main

import (
	"fmt"
)

type point struct {
	x        int
	y        int
	distance int
}

type beacon struct {
	x int
	y int
}

func abs(x int) int {
	if x < 0 {
		x = -x
	}
	return x
}

func manhattanDistance(x, y, i, j int) int {
	return (abs(x-i) + abs(y-j))
}

func isBeacon(b beacon, x, y int) bool {
	if x == b.x && y == b.y {
		return true
	}
	return false
}

func main() {
	var points []point
	var beacons []beacon
	for {
		x, y, i, j := 0, 0, 0, 0
		fmt.Scanf("Sensor at x=%d, y=%d: closest beacon is at x=%d, y=%d\n", &x, &y, &i, &j)
		if x == 0 {
			break
		}

		distanceBetweenPoints := manhattanDistance(x, y, i, j)
		points = append(points, point{x, y, distanceBetweenPoints})
		beacons = append(beacons, beacon{i, j})
	}

	res := 0
	for i := -10000000; i < 10000000; i++ {
		found := false

		for _, e := range points {
			eep := false
			for _, b := range beacons {
				if isBeacon(b, 2000000, i) {
					eep = true
				}
			}
			if eep {
				found = false
				break
			}
			// fmt.Printf("%d ", (manhattanDistance(10, i, e.x, e.y) - e.distance))
			if manhattanDistance(2000000, i, e.x, e.y) <= e.distance {
				found = true
				break
			}
		}
		// fmt.Printf("\n")

		if found {
			res++
		}
	}

	fmt.Printf("%d\n", res)
}
