#https://codeforces.com/problemset/problem/412/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,k=map(int,input().split())
s=input()
w='-'*n
print("PRINT",s[k-1])
s=s[:k-1]+'-'+s[k:]
d=False
if(k>int(n/2)): d=True
while(s!=w):
    if(d):
        if(k==n):
            d=1-d
            k-=1
        else: k+=1
    else:
        if(k==1):
            d=1-d
            k+=1
        else: k-=1
    print("RIGHT" if d else "LEFT")
    if(s[k-1]!='-'):print("PRINT",s[k-1])
    s=s[:k-1]+'-'+s[k:]
