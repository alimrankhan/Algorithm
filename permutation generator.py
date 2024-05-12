#permutations
# li= [1,2,3] #output: [[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]]
li= [5,2,3]
ans= []
le= len(li)
visited= [0]*le
def perm(li:list, pos:int,r= le ):
    
    if pos==r:
        # return ans
        for i in ans:
            print(i, end=' ')
        print()
        # ans.clear()
        

    for i in range(0,3):
        if not visited[i]:
            visited[i]= 1
            ans.append(li[i])
            perm(li, pos+1,r)
            visited[i]= 0
            ans.pop()


    return

perm(li,0,le)
perm(li,0,2)
perm(li,0,1)
perm(li,0)
