import math
x=1
a=int()
n=int()
m=int()
def bigmod(x,n,m):
	if n<=0:
		return 1%m
	if(n%2==1):
		return (x*bigmod((x*x)%m,n-1/2,m))%m
	return bigmod((x*x)%m,n/2,m)%m
c=(bigmod(3,3,7))
print(c)
