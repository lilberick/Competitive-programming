#https://codeforces.com/problemset/problem/1634/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	4400 KB
t=int(input())
for x in range(0,t):
    n,k=map(int,input().split())
    s=input()
    if(k==0):print(1)
    else:
        if(s[::-1]==s):print(1)
        else:print(2)
