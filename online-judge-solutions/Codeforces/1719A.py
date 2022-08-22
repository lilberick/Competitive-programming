#https://codeforces.com/problemset/problem/1719/A
#Lang		:	Python 3.8
#Time		:	108 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m=map(int,input().split())
    print("Burenka" if (n+m)%2 else "Tonya")
