#https://codeforces.com/problemset/problem/1496/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
t=int(input())
for x in range(t):
    n,k=map(int,input().split())
    s=input()
    if(k==0):print("YES")
    elif(k==n/2):print("NO")
    else:
        a=s[:k]
        b=s[n-k:n]
        b=b[::-1]
        print("YES" if a==b else "NO")
