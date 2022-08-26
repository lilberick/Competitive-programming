#https://codeforces.com/problemset/problem/1712/B
#Lang		:	Python 3.8
#Time		:	171 ms
#Memory         :	3400 KB
for _ in range(int(input())):
    n=int(input())
    v=[i+1 for i in range(n)]
    for i in range(n-1,0,-2):
        v[i],v[i-1]=v[i-1],v[i]
    print(*v)
