#https://codeforces.com/problemset/problem/1220/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory     :	200 KB
n,s=int(input()),input()
nzero=s.count('z')
nuno=s.count('n')
for i in range(nuno+nzero):
    print(1,end=" ") if i<nuno else  print(0,end=" ")
