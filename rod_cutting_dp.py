#rod_cutting problem #recursion #dp
import sys
def rod_cut(li,n):
	r= [ -sys.maxsize for i in range(0,len(li))]
	if r[n-1]>=0:
		return r[n-1]
	
	if(n<=0):
		return 0
	max_val= -sys.maxsize	
	for i in range(0,n):
		max_val= max(max_val,li[i]+rod_cut(li,n-i-1)) #key_line
	r[n-1]=max_val
	return max_val
	
li= [2,5,9,6,7]
#r=[ -sys.maxsize for i in range(0,len(li))]
print(rod_cut(li,5))
