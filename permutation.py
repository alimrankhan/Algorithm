def permutation(n:int, r:int):
    ans= 1

    for i in range(r):
        ans*= (n-i)

    return ans

print(permutation(3,2))