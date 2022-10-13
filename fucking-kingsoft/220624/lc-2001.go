func interchangeableRectangles(rectangles [][]int) int64 {
	var gcd func(int, int) int
	gcd = func(a, b int) int {
		if b == 0 {
			return a
		}
		return gcd(b, a % b)
	}
	flag := make(map[int]int64)
	for _, r := range rectangles {
		g := gcd(r[0], r[1])
		flag[r[0] / g * 1e5 + r[1] / g]++
	}
	var ans int64 = 0
	for _, f := range flag {
		ans += f * (f - 1) / 2
	}
	return ans
}
