#prime_number #sieve_of_eratosthenes
from math import sqrt
n=int(input())
prime= [1 for i in range(1,n+2)]

for i in range(0,2):
	prime[i]=False
	
for i in range(4,n+1,2):
	prime[i]=False
nop=1
limit=int(sqrt(n))+1
for i in range(3,limit,2):
	if(prime[i]):
		nop+=1
		for j in range(i*i,n+1,(i*2)):
			prime[j]=False
print(nop)
for number, p in enumerate(prime):
	print(f'{number} is:',end=' ')
	if(p):
		print('Prime')
	else:
		print('Not Prime')
