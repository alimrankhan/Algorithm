#n-queens #backtracking

num_of_q= 0
def n_queens(n:int, at:int)->int:
    global num_of_q
    if at==n:
        num_of_q+=1  
        for i in ans:
            print(i,end=' ')
        print()
    
    for i in range(n):
        if (not col[i] and not diag1[at+i] and not diag2[n-1+at-i]):
            col[i]= diag1[i+at]= diag2[n-1+at-i]= True
            ans.append(i)
            n_queens(n,at+1)
            col[i]= diag1[i+at]= diag2[n-1+at-i]= False
            ans.pop()

    return num_of_q

n= 4
col= [False]*n
diag1= [False]* (2*n-1)
diag2= [False]* (2*n-1)
ans= []
print(n_queens(n,0))
    
            
