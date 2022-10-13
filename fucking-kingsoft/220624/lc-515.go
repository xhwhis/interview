func largestValues(root *TreeNode) []int {
	ans := make([]int, 0)
	var dfs func(*TreeNode, int)
	dfs = func(node *TreeNode, depth int) {
		if node == nil {
			return
		}
		if depth == len(ans) {
            ans = append(ans, node.Val)
        } else {
			if ans[depth] < node.Val {
				ans[depth] = node.Val
			}
        }
        dfs(node.Left, depth + 1)
        dfs(node.Right, depth + 1)
	}
	dfs(root, 0)
	return ans
}
