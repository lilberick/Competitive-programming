#https://codeforces.com/problemset/problem/1689/A
#Lang		:	Python 3.8
#Time		:	61 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    a,b,c,ma,mb=input(),input(),"",0,0
    a=''.join(sorted(a,reverse=True))
    b=''.join(sorted(b,reverse=True))
    while(len(a) and len(b)):
        g=a[-1]<b[-1]
        if(g and ma==k):g=0
        if(not g and mb==k):g=1
        if(g):
            c+=a[-1]
            ma+=1
            mb,a=0,a[:-1]
        else:
            c+=b[-1]
            mb+=1
            ma,b=0,b[:-1]
    print(c)
