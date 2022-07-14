#https://codeforces.com/problemset/problem/1539/B
#Lang		:	Python 3.8
#Time		:	967 ms
#Memory         :	3400 KB
n,q=map(int,input().split())
s,suma,v=input(),0,[]
for i in range(len(s)):
    suma+=ord(s[i])-96
    v.append(suma)
for x in range(q):
    l,r=map(int,input().split())
    menos=0 if l-2<0 else v[l-2]
    print(v[r-1]-menos)
