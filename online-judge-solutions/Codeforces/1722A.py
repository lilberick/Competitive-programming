#https://codeforces.com/problemset/problem/1722/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,s,nombre=int(input()),input(),"Timru"
    s=''.join(sorted(s))
    print("YES" if s==nombre else "NO")

