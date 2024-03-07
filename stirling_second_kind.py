#stirling number of second kind #ada_book

def stirling_sec(n:int, k:int):
    if k==1 or k==n:
        return 1
    return stirling_sec(n-1,k-1) + (k* stirling_sec(n-1,k))

print(stirling_sec(4,2))