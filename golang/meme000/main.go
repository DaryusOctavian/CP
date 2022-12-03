package main

import (
	"fmt"
	"unicode"
)

func max(aa int, bb int) int {
	if aa > bb {
		return aa
	}
	return bb
}

func main() {
	var res int = 0
	for {
		var a string = ""
		fmt.Scanln(&a)
		if a == "" {
			break
		}
		var b string = ""
		fmt.Scanln(&b)
		var c string = ""
		fmt.Scanln(&c)

		var v1 [52]int
		var v2 [52]int
		var v3 [52]int

		for i := 0; i < 52; i++ {
			v1[i] = 0
			v2[i] = 0
			v3[i] = 0
		}

		var lens int = max(max(len(a), len(b)), len(c))

		for i := 0; i < lens; i++ {
			if i < len(a) {
				if unicode.IsLower(rune(a[i])) {
					v1[a[i]-'a'] += 1
				} else {
					v1[a[i]-'A'+26] += 1
				}
			}

			if i < len(b) {
				if unicode.IsLower(rune(b[i])) {
					v2[b[i]-'a'] += 1
				} else {
					v2[b[i]-'A'+26] += 1
				}
			}

			if i < len(c) {
				if unicode.IsLower(rune(c[i])) {
					v3[c[i]-'a'] += 1
				} else {
					v3[c[i]-'A'+26] += 1
				}
			}
		}

		for i := 0; i < 52; i++ {
			if v1[i] > 0 && v2[i] > 0 && v3[i] > 0 {
				res += i + 1
			}
		}
	}

	fmt.Println(res)

}
