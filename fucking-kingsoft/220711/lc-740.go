func deleteAndEarn(nums []int) int {
	points := make(map[int]int)
	for _, num := range nums {
		points[num] += num
	}

	max := func(a, b int) int {
		if a > b {
			return a
		}
		return b
	}

	a, b := 0, points[0]
	for i := 1; i < 10001; i++ {
		a, b = b, max(a+points[i], b)
	}
	return b
}
