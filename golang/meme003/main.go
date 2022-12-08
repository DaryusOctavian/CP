package main

import (
	"fmt"
	"strconv"
)

type dir struct {
	parent string
	files  int
	dirs   []string
}

type coclender interface {
	get_size()
	addfile()
	adddir()
	addparent()
}

func (x *dir) get_size(mp map[string]*dir) int64 {
	var res int64 = 0
	res += int64(x.files)
	for _, e := range x.dirs {
		_, eep := mp[e]
		if eep {
			res += mp[e].get_size(mp)
		}
	}

	return res
}

func (x *dir) addfile(crt int) {
	x.files += crt
}

func (x *dir) addparent(s string) {
	x.parent = s
}

func (x *dir) adddir(eep string) {
	x.dirs = append(x.dirs, eep)
}

func main() {
	var wd string
	mp := make(map[string]*dir)
	mp["/"] = new(dir)
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
					wd = mp[wd].parent
				} else if crt != "/" {
					(mp[crt]).addparent(wd)
					wd = crt
				} else {
					wd = "/"
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
