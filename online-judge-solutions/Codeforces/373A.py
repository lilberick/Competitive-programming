#https://codeforces.com/problemset/problem/373/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
k=int(input())
m=[int(c) for row in range(4) for c in input().strip() if c!='.']
print("YES" if all(m.count(t) <= 2*k for t in set(m)) else "NO")

