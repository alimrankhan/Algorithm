#catalan number #ada book #combination

def permutation(n:int, r:int):
    ans= 1

    for i in range(r):
        ans*= (n-i)

    return ans

def factorial(n:int):
    ans= 1
    for i in range(2,n+1):
        ans*= i

    return ans
def combination(n:int, r:int):
    return int(permutation(n,r)/ factorial(r))

def catalan_num(n:int):
    return combination(2*n,n)- combination(2*n, n+1)

print(catalan_num(3))