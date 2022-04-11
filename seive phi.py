#algorithm #sieve_phi
n=int(input())
n=n+1
flag= [0]*n
phi= [0]*n
for i in range(0,n):
	phi[i]=i
flag[0]=1
flag[1]=1
for i in range(2,n):
	if(not(flag[i])):
		for j in range(i,n,i):
			flag[j]=1
			phi[j]= phi[j]/i*(i-1)
print(phi)
