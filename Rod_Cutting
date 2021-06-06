#rod_cutting_dp
import sys

def rod_cut(li,n):
	val=[0 for i in range(n+1)]
	
	for i in range(1,n+1):
		max_val= -sys.maxsize
		for j in range(i):
			max_val= max(max_val, li[j]+val[i-j-1])
		val[i]=max_val
	print(val)
	return val[n]

li= [2,5,9,6,7]
print(rod_cut(li,5))
