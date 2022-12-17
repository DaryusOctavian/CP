package main

import "fmt"

func main() {
	var mp [][]int
	for {
		s := ""
		fmt.Scanf("%s", &s)
		if s == "" {
			break
		}
		var temp []int
		for _, e := range s {
			temp = append(temp, int(e-'0'))
			mp = append(mp, temp)
		}
	}

	b := make([][]bool, len(mp), len(mp[0]))

	for i := range mp {
		b[i][0] = true
		b[i][len(mp[0])-1] = true

		mx1 := mp[i][0]
		mx2 := mp[i][len(mp[0])-1]

		for x := 1; x < len(mp[0]); x++ {
			if mp[i][x] > mx1 {
				b[i][x] = true
				mx1 = mp[i][x]
			}
		}
		for x := len(mp[0]); x > 0; x-- {
			if mp[i][x] > mx2 {
				b[i][x] = true
				mx2 = mp[i][x]
			}
		}
	}

	for i := range mp {
		b[0][i] = true
		b[len(mp)-1][i] = true

		mx1 := mp[0][i]
		mx2 := mp[len(mp)-1][i]

		for x := 1; x < len(mp); x++ {
			if mp[x][i] > mx1 {
				b[x][i] = true
				mx1 = mp[x][i]
			}
		}
		for x := len(mp); x > 0; x-- {
			if mp[x][i] > mx2 {
				b[x][i] = true
				mx2 = mp[x][i]
			}
		}
	}

	res := 0
	for _, e := range b {
		for _, ep := range e {
			if ep {
				res++
			}
		}
	}

	fmt.Println(res)
}
