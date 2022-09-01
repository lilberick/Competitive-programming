#https://codeforces.com/problemset/problem/1722/B
#Lang		:	Python 3.8
#Time		:	31 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,a,b=int(input()),input(),input()
    a,b=a.replace('G','B'),b.replace('G','B')
    print("YES" if a==b else "NO")
