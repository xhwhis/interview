package main

import (
	"fmt"
)

func merge(a, b []int) (c []int) {
	aLen, bLen := len(a), len(b)
	aFlag, bFlag := 0, 0
	for aFlag < aLen && bFlag < bLen {
		if a[aFlag] < b[bFlag] {
			c = append(c, a[aFlag])
			aFlag++
		} else {
			c = append(c, b[bFlag])
			bFlag++
		}
	}
	if aFlag == aLen {
		c = append(c, b[bFlag:]...)
	} else if bFlag == bLen {
		c = append(c, a[aFlag:]...)
	}
	return
}

func mergeSort(a []int, l, r int) []int {
	if r-l <= 1 {
		if r-l == 1 && a[l] > a[r] {
			return []int{a[r], a[l]}
		}
		return a[l : r+1]
	}
	mid := (r + l) / 2
	sortedA, sortedB := mergeSort(a, l, mid), mergeSort(a, mid+1, r)
	return merge(sortedA, sortedB)
}

func main() {
	a := []int{1, 4, 8, 9}
	b := []int{2, 3, 5, 7, 8}
	c := merge(a, b)
	fmt.Println(c)
	d := []int{3, 6, 67, 89, 2, 21, 66, 563, 2}
	e := mergeSort(d, 0, len(d)-1)
	fmt.Println(e)
}

