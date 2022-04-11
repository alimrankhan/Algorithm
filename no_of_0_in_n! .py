#no. of 0 in n!
import math

def func(n):
	i= 1
	ans= 0
	while(n/5**i >=1):
		ans+= (n/5**i) #main formula= n/a**i[a is the number, whice is 5 in this case]
		i+=1
	return int(ans)
n= int(input())
print(func(n))
