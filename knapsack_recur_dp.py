import sys
 
 
# Values (stored in list `v`)
# Weights (stored in list `w`)
# Total number of distinct items `n`
# Knapsack capacity `W`
def knapsack(v, w, n, W):
 
    # base case: Negative capacity
    if W < 0:
        return -sys.maxsize
 
    # base case: no items left or capacity becomes 0
    if n < 0 or W == 0:
        return 0
 
    # Case 1. Include current item `n` in knapsack `v[n]` and recur for
    # remaining items `n-1` with decreased capacity `W-w[n]`
    include = v[n] + knapsack(v, w, n - 1, W - w[n])
 
    # Case 2. Exclude current item `v[n]` from the knapsack and recur for
    # remaining items `n-1`
    exclude = knapsack(v, w, n - 1, W)
 
    # return maximum value we get by including or excluding the current item
    return max(include, exclude)
 
 
# 0–1 Knapsack problem
if __name__ == '__main__':
 
    # input: a set of items, each with a weight and a value
    v = [20, 5, 10, 40, 15, 25]
    w = [1, 2, 3, 8, 7, 4]
 
    # knapsack capacity
    W = 10
 
    print("Knapsack value is", knapsack(v, w, len(v) - 1, W))
