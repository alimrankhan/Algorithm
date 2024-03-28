#copy from permutation.py
def permutation(n:int, r:int):
    ans= 1

    for i in range(r):
        ans*= (n-i)

    return ans

def factorial(n= int()):
    ans= 1
    for i in range(2,n+1):
        ans*= i

    return ans
def combination(n:int, r:int):
    return int(permutation(n,r)/ factorial(r))

print(permutation(3,3))
print(factorial(5))
print(combination(3,0))