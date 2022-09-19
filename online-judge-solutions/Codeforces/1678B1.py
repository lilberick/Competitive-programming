#https://codeforces.com/problemset/problem/1678/B1
#Lang		:	Python 3.8
#Time		:	124 ms
#Memory         :	1100 KB
for _ in range(int(input())):
	n,s,w=int(input()),input(),0
	print(sum([1 for i in range(1,n,2) if s[i]!=s[i-1]]))
