#lcs #dp #long_common_subsequence

def lcs(str1,str2):
	m=len(str1)
	n=len(str2)
	ans=[]
	l=0
	x=0
	t=[[0 for i in range(n+1)]for j in range(m+1)]
	for i in range(1,m+1):
		for j in range(1,n+1):
			
			if str1[i-1]==str2[j-1]:
				t[i][j]= t[i-1][j-1]+1
				
			else:
				t[i][j]= max(t[i-1][j], t[i][j-1])
			
			
	return t[i][j]
a='abcde'
b='bcae'
print(lcs(a,b))
