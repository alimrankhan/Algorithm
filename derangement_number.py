#dearangement number

def derangement_num(n:int):
    if n==2:
        return 1

    if n==1:
        return 0

    return (n-1)*derangement_num(n-2) + (n-1)*derangement_num(n-1)

print(derangement_num(2))

print(derangement_num(3))

print(derangement_num(4))

print(derangement_num(5))

print("hello from github android app")
