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

print(ans) #the number of the the subarray
