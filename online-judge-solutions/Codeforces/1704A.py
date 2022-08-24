#https://codeforces.com/problemset/problem/1704/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m=map(int,input().split())
    a,b=input(),input()
    c=a[0:n-m+1]
    print("YES" if c.find(b[0])>=0 and b[1:]==a[n-m+1:] else "NO")
