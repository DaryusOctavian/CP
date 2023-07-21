package main

import (
	"fmt"
	"sort"
)

func max(a, b int) int {
	if a > b {
		return a
	}

	return b
}

type Component struct {
	Centroid int
	Radius   int
	Diameter int
}

type Queue struct {
	Values []int
}

func (queue *Queue) Push(element int) {
	queue.Values = append(queue.Values, element)
}

func (queue *Queue) Pop() int {
	res := queue.Values[0]

	if len(queue.Values) == 1 {
		queue.Values = []int{}
	} else {
		queue.Values = queue.Values[1:]
	}

	return res
}

func (queue *Queue) Empty() bool {
	return len(queue.Values) == 0
}

type Stack struct {
	Values []int
}

func (stack *Stack) Size() int {
	return len(stack.Values)
}

func (stack *Stack) Push(element int) {
	stack.Values = append(stack.Values, element)
}

func (stack *Stack) Pop() int {
	res := stack.Values[len(stack.Values)-1]

	if len(stack.Values) == 1 {
		stack.Values = []int{}
	} else {
		stack.Values = stack.Values[:len(stack.Values)-1]
	}

	return res
}

func (stack *Stack) Top() int {
	return stack.Values[len(stack.Values)-1]
}

func (stack *Stack) Empty() bool {
	return len(stack.Values) == 0
}

func (stack *Stack) Sort() {
	sort.Ints(stack.Values)
}

func bfs(start int, graph *[][]int, vis *[]bool) int {
	res := 0
	var q Queue

	q.Push(start)

	for !q.Empty() {
		node := q.Pop()
		(*vis)[node] = true

		for _, next := range (*graph)[node] {
			if !(*vis)[next] {
				q.Push(next)
				(*vis)[next] = true
				res += 1
			}
		}
	}

	return res
}

func getComponents(graph *[][]int) []int {
	var res []int

	vis := make([]bool, len(*graph))

	for i := range vis {
		if !vis[i] {
			res = append(res, i)
			bfs(i, graph, &vis)
		}
	}

	return res
}

func getCentroid(start int, graph *[][]int) int {
	for {
		toMove := -1
		vis := make([]bool, len(*graph))
		vis[start] = true
		found := false

		for _, node := range (*graph)[start] {
			crt := bfs(node, graph, &vis)

			if crt > len(*graph)/2 {
				found = true
				toMove = node
			}
		}

		if !found {
			break
		}
		start = toMove
	}

	return start
}

func getRadiusRec(start int, graph *[][]int, vis *[]bool) int {
	res := 0
	(*vis)[start] = true

	for _, next := range (*graph)[start] {
		if !(*vis)[next] {
			(*vis)[next] = true
			// fmt.Println(next)
			res = max(res, 1+getRadiusRec(next, graph, vis))
			(*vis)[next] = false
		}
	}

	return res
}

func getRadius(start int, graph *[][]int) int {
	vis := make([]bool, len(*graph))
	vis[start] = true

	return getRadiusRec(start, graph, &vis)
}

func getDiameterRec(start int, graph *[][]int, vis *[]bool) (int, int) {
	res, node := 0, start
	(*vis)[start] = true

	for _, next := range (*graph)[start] {
		if !(*vis)[next] {
			(*vis)[next] = true
			dist, crt := getDiameterRec(next, graph, vis)
			dist += 1
			if dist > res {
				res = dist
				node = crt
			}
			(*vis)[next] = false
		}
	}

	return res, node
}

func getDiameter(start int, graph *[][]int) int {
	vis := make([]bool, len(*graph))
	distance1, node := getDiameterRec(start, graph, &vis)
	for i := range vis {
		vis[i] = false
	}
	distance2, _ := getDiameterRec(node, graph, &vis)

	// fmt.Println("TEST:", distance1, distance2)

	return max(distance1, distance2)
}

func main() {
	var nodes, edges int
	fmt.Scan(&nodes, &edges)

	graph := make([][]int, nodes)

	for i := 0; i < edges; i++ {
		var x, y int
		fmt.Scan(&x, &y)

		graph[x] = append(graph[x], y)
		graph[y] = append(graph[y], x)
	}

	if nodes-1 == edges {
		fmt.Println(getDiameter(0, &graph))
		return
	}

	componentNumber := getComponents(&graph)

	components := make([]Component, len(componentNumber))

	var diameters Stack

	for i := range components {
		components[i].Centroid = getCentroid(componentNumber[i], &graph)
		components[i].Radius = getRadius(components[i].Centroid, &graph)
		components[i].Diameter = getDiameter(components[i].Centroid, &graph)

		diameters.Push(components[i].Diameter)
	}

	for diameters.Size() > 1 {
		wing1, wing2 := diameters.Top()/2, diameters.Top()/2
		if diameters.Top()%2 == 1 {
			wing1 += 1
		}
		diameters.Pop()

		wing3, wing4 := diameters.Top()/2, diameters.Top()/2
		if diameters.Top()%2 == 1 {
			wing3 += 1
		}
		diameters.Pop()

		a := wing1 + wing2
		b := wing3 + wing4
		c := wing1 + wing3 + 1

		diameters.Push(max(max(a, b), c))
	}

	fmt.Println(diameters.Top())
}

// TLE
