import math
x: int
n: int()
m= int
c= int()
def bigmod(x,n,m):
	if n<2:
		return x%m
	if(n%2==1):
		return x*(bigmod((x*x)%m,n//2,m))%m
	return bigmod((x*x)%m,n//2,m)%m
c=(bigmod(4,2,6))
print(c)
