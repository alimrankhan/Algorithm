#no 0 in fac

n= int(input())
ans= int(0)
a=5
while(a<= n):
    ans= ans+(n/a)
    a= a*a

print(int(ans))
