#https://codeforces.com/problemset/problem/408/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n=int(input())
k=list(map(int,input().split()))
m=[list(map(int,input().split())) for i in range(len(k))]
r=1000000
for i in range(len(m)):
    s=15*len(m[i])
    s+=sum([m[i][j]*5 for j in range(len(m[i]))])
    r=min(r,s)
print(r)
