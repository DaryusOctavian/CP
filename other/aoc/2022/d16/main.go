package main

import (
	"fmt"
	"unicode"
)

type Valve struct {
	name     int
	flow     int
	children []int
}

func nameToInt(s string) int {
	return int(int(s[0]-'A')*26 + int(s[1]-'A'))
}

func makeStringToLeadsTo(s string, leadsTo *[]string) {
	for _, e := range s {
		if len(*leadsTo) == 0 {
			*leadsTo = append(*leadsTo, "")
		}
		if unicode.IsLetter(e) {
			if len((*leadsTo)[len(*leadsTo)-1]) == 1 {
				(*leadsTo)[len(*leadsTo)-1] += string(e)
			} else {
				*leadsTo = append(*leadsTo, string(e))
			}
		}
	}
}

func main() {
	var valves []*Valve
	// crt := new(Valve)

	for {
		name, flow := "", -1
		fmt.Scanf("Valve %s has flow rate=%d; tunnels lead to valves", &name, &flow)
		if flow == -1 {
			break
		}

		var leadsTo []string
		s := "eaeo"
		for {
			fmt.Scan(s)
			fmt.Print(s)
			if s == "eaeo" {
				break
			}
			leadsTo = append(leadsTo, s)
			fmt.Println(leadsTo)
		}

		var leadsToInt []int
		for _, e := range leadsTo {
			leadsToInt = append(leadsToInt, nameToInt(e))
		}

		v := Valve{nameToInt(name), flow, leadsToInt}
		valves = append(valves, &v)
	}

	for _, e := range valves {
		fmt.Printf("name=%d, flow=%d, ", e.name, e.flow)
		for _, ep := range e.children {
			fmt.Printf("%d", ep)
		}
	}
}
