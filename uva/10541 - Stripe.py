
def nCr(n,r):
    return (fact(n) // (fact(r)* fact(n - r)))

def fact(n):
    res = 1
    for i in range(2, n + 1):
        res = res * i
    return res

t=int(input())
ans=int()
while t>0:
    a=list(map(int,input().split()))
    n=int(a[0])
    k=int(a[1])
    del a[0]
    del a[0]
    Sum=int(sum(a))
    Sum=n-Sum
    if Sum==0:
        ans=0
    else:
        ans=int(nCr(Sum+1,k))
    print(ans)
    t-=1
