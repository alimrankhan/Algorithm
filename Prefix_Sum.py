#push to Algorithm
def pre_list(li:list):
	pref_list= [0]
	for i in range(1,len(li)+1):
		pref_list.append(pref_list[i-1]+li[i-1])
	return pref_list

def pre_sum(li:list, n:int):
	return pre_list(li)[n]
def range_pre_sum(li:list, l:int, r:int):
	return pre_sum(li,r)-pre_sum(li,l-1)
	 
li= [4,7,4,4,6] # -> [0, 4, 8, 12, 18]
print(li)
print(pre_list(li))
print(pre_sum(li,2))
print(range_pre_sum(li,2,4))
