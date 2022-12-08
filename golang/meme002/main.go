package main

import "fmt"

func get(s string) int {
	var v [26]int
	for _, e := range s {
		v[int(e-'a')]++
	}

	res := 0
	for _, e := range v {
		if e > 0 {
			res++
		}
	}

	return res
}

func main() {
	var s string
	fmt.Scanf("%s", &s)

	for i := 14; i < len(s); i++ {
		if get(s[i-14:i]) == 14 {
			fmt.Println(i)
			return
		}
	}
}
