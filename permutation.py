def permutation(n:int, r:int):
    ans= 1

    for i in range(r):
        ans*= (n-i)

    return ans

print(f"The total number of elements is: {permutation(3,2)}")

#generating actual permutation
print('permutations using backtracking: ')
visited= [0]*3
li= [5 ,2,3]
ans= []
def perm(li:list, pos:int):
    
    if pos==len(li):
        # return ans
        for i in ans:
            print(i, end=' ')
        print()
        # ans.clear()
        

    for i in range(0,3):
        if not visited[i]:
            visited[i]= 1
            ans.append(li[i])
            perm(li, pos+1)
            visited[i]= 0
            ans.pop()


    return ans

# li= [1,2,3] #output: [[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]]
le= len(li)
perm(li,0)