#no. of 0 in n!
import math

n= int(input())
ans= int(0)
a=5
while(a<= n):
    ans= ans+(n/a)
    a= a*a

print(int(ans))
