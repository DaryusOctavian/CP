package main

import (
	"fmt"
)

func main() {
	cnt := 0
	for {
		a, b, x, y := 0, 0, 0, 0
		fmt.Scanf("%d-%d,%d-%d\n", &a, &b, &x, &y)
		if a == 0 && b == 0 && x == 0 && y == 0 {
			break
		}

		if !(b < x || a > y) {
			cnt++
		}
	}
	fmt.Println(cnt)
}
