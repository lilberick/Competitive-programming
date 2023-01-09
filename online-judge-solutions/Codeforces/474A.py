#https://codeforces.com/problemset/problem/474/A/
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
c,s,k,m=input(),input(),"qwertyuiopasdfghjkl;zxcvbnm,./",{}
m={z:i for i,z in enumerate(k)}
print(*[k[m[x]-1] if c=='R' else k[m[x]+1] for x in s],sep="")
