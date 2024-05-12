#subarray generator 

def sublist(li, k):
    return

li= [1,2,3]
l= len(li)
ans= 1
#(1,2,3)= ((), (1))
for i in range(1,l+1):
    ans= ans+ (l-i+1)
    for j in range(0,l-i+1): #generating the subarrays
        print(li[j:j+i],end='') 
    print()
# 3 ways to print anything
# print("total number of elements in subarray %x"%ans) #the number of the the subarray
print(f"total number of elements in subarray {ans}") # f_string
# print("total number of elements in subarray {}".format(ans)) #the number of the the subarrayc