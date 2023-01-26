#https://codeforces.com/problemset/problem/611/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
a=input().split()
n,s=int(a[0]),a[2]
if(s=="month"): print(12 if n<30 else (11 if n==30 else 7))
else: print(53 if (n==5 or n==6) else 52)
