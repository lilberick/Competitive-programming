#https://codeforces.com/problemset/problem/1699/A
#Lang		:	Python 3.8
#Time		:	93 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n=int(input())
    print(-1 if n%2!=0 else f"0 {int(n/2)} {int(n/2)}")
