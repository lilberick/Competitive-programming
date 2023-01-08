#https://codeforces.com/problemset/problem/440/A
#Lang		:	Python 3.8
#Time		:	124 ms
#Memory         :	6800 KB
n=int(input())
a=list(map(int,input().split()))
a.append(1000000)
a.sort()
print([i+1 for i,x in enumerate(a) if(x!=i+1)][0])
