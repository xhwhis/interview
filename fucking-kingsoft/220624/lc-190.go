func reverseBits(num uint32) uint32 {
    var ans uint32 = 0
	for i := 0; i < 32; i++ {
		ans <<= 1
		ans += num & 1
		num >>= 1
	}
	return ans
}
