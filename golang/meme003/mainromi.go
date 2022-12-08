package main

import (
	"fmt"
	"strconv"
)

type Node interface {
	GetName() string
	GetSize() int64
	AddChild(node *Node)
	GetParent() *Node
	//GetChildren() []*Node
}

type Dir struct {
	name     string
	parent   *Node
	children []*Node
}

func (self *Dir) GetName() string {
	return self.name
}

func (self *Dir) GetSize() int64 {
	var res int64 = 0
	for _, c := range self.children {
		res += (*c).GetSize()
	}
	return res
}

func (self *Dir) AddChild(crt *Node) {
	//daca exista nu-l mai adaug
	self.children = append(self.children, crt)
}

func (self *Dir) GetParent() *Node {
	return self.parent
}

type File struct {
	name   string
	parent *Node
	size   int64
}

func (self *File) GetName() string {
	return self.name
}

func (self *File) GetSize() int64 {
	return self.size
}

func (self *File) AddChild(crt *Node) {
	//daca exista nu-l mai adaug
	return
}

func (self *File) GetParent() *Node {
	return self.parent
}

// x := [...]int{10, 20, 30}

func main() {
	var ttemp [1000]*Node
	root := &Dir{"/", nil, []}
	var crtN *Node = root
	for {
		var crt string = ""
		fmt.Scanf("%s", &crt)
		if crt == "" {
			break
		}

		if crt == "$" {
			fmt.Scanf("%s", &crt)
			if crt == "cd" {
				fmt.Scanf("%s", &crt)
				if crt == ".." {
					crtN = (*crtN).GetParent()
				} else if crt == "/" {
					crtN = root
				} else {

				}
			}

		} else {
			var woo string = ""
			fmt.Scanf("%s", &woo)
			ep, _ := strconv.ParseInt(crt, 10, 32)
			eep := int(ep)
			if eep != 0 {
				mp[wd].addfile(eep)
			} else if crt == "dir" {
				mp[wd].adddir(woo)
				_, ok := mp[woo]
				if !ok {
					mp[woo] = new(dir)
				}
			}
		}
	}

	var res int64 = 0
	for _, e := range mp {
		crt := e.get_size(mp)
		fmt.Println(crt, e.files)
		if crt <= 100000 {
			res += int64(crt)
		}
	}
	fmt.Println(res)
}

/*
$ cd /
$ ls
dir a
14848514 b.txt
8504156 c.dat
dir d
$ cd a
$ ls
dir e
29116 f
2557 g
62596 h.lst
$ cd e
$ ls
584 i
$ cd ..
$ cd ..
$ cd d
$ ls
4060174 j
8033020 d.log
5626152 d.ext
7214296 k
*/
