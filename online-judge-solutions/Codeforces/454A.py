#https://codeforces.com/problemset/problem/454/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n=int(input())
for i in range(n):
    s,c='*'*n,i
    if(c>int(n/2)): c=n-1-c
    c=int(2*c+1)
    for j in range(int((n-c)/2)+1,int((n-c)/2)+c+1,1):s=s[:j-1]+'D'+s[j:]
    print(s)
