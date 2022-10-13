func maxProfit(prices []int) int {
	ans, minPrice := 0, prices[0]
	for _, price := range prices {
		if minPrice > price {
			minPrice = price
		} else if tmp := price - minPrice; ans < tmp {
			ans = tmp
		}
	}
	return ans
}
