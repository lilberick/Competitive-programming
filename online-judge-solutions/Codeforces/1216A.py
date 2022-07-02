#https://codeforces.com/problemset/problem/1216/A
#Lang		:	Python 3.8
#Time		:	171 ms
#Memory         :	1500 KB
n,s=int(input()),input()
r=s
s=list(s)
for i in range(0,n,2):
    na=s[i:i+2].count('a')
    nb=s[i:i+2].count('b')
    if(na!=nb):
        s[i]='a'
        s[i+1]='b'
d=0
s=''.join(s)
for i in range(n):
    if(s[i]!=r[i]):d+=1 
print(d)
print(s)
