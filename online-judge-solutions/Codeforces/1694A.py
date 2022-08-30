#https://codeforces.com/problemset/problem/1694/A
#Lang		:	Python 3.8
#Time		:	249 ms
#Memory         :	0 KB
for _ in range(int(input())):
    a,b=map(int,input().split())
    while(a>0 or b>0):
        if(a>0):
            print(0,end='')
            a-=1
        if(b>0):
            print(1,end='')
            b-=1
    print("\n",end="")
