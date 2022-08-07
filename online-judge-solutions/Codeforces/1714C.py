#https://codeforces.com/problemset/problem/1714/C
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
t=int(input())
for x in range(t):
    s,w=int(input()),""
    for i in range(9,0,-1):
        if(s>=i):
            w=str(i)+w
            s-=i
    print(w)
