#https://codeforces.com/problemset/problem/1146/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
s=input()
x=s.count('a')
print(min(len(s),2*x-1))
