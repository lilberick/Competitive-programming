#https://codeforces.com/problemset/problem/1701/B
#Lang		:	Python 3.8
#Time		:	374 ms
#Memory         :	12100 KB
for _ in range(int(input())):
    n=int(input())
    v,w=[i+1 for i in range(n)],[]
    for i in range(1,n+1):
        k=i
        if(k%2!=0):
            w.append(k)
            while(k*2<=n):
                w.append(k*2)
                k*=2
    print(2)
    print(*w)
