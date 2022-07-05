#https://codeforces.com/problemset/problem/1284/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m=map(int,input().split())
s= list(map(str,input().strip().split()))[:n]
t= list(map(str,input().strip().split()))[:m]
q=int(input())
for i in range(q):
    a=int(input())
    print(s[((a%n)+(n-1))%n]+t[((a%m)+(m-1))%m])
