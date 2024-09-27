print('Generating subset using Recurssions')

def subset_generate(k:int):
	if k== n+1:
		print(ans)
		return ans
	
	ans.append(k)	
	subset_generate(k+1)
	ans.pop()
	subset_generate(k+1)
	
n= 3
ans=[]
k=1
subset_generate(1)
