#stirling number of first kind #ada book

def fac(n:int):
    if n==1 or n==0:
        return 1
    if n==2:
        return 2

    return n*fac(n-1)
def stirling_first(n:int, k:int):
    if k==n:
        return 1
    elif k==1:
        return fac(n-1)

    return stirling_first(n-1, k-1)+ ((n-1)* stirling_first(n-1,k))

print(stirling_first(4,2))