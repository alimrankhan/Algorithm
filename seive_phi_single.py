#find number of coefficient that not common 
import math
def seive_phi(n):
	#n=int(input())
	lim= int(math.sqrt(n))
	phi= n
	for i in range(2,lim+1):
		if(n%i==0):
			while(n%i == 0): #primeNum->i
				n/=i #n= n/i
				
			phi= phi/i*(i-1) #phi(n)= n*(1-1/i)= n*(i-1/i)= n/i*(i-1)
	if n>1:
		phi= phi/n*(n-1)
	return int(phi)
for x in range(10):
	print(f"phi({x})= {seive_phi(x)}")
	
