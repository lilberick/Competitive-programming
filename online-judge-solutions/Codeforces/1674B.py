#https://codeforces.com/problemset/problem/1674/B
#Lang		:	Python 3.8
#Time		:	30 ms
#Memory         :	0 KB
m,k={},0
for i in range(1,27,1):
    for j in range(1,27,1):
        if(i!=j):
            k+=1
            w=chr(i+96)+chr(j+96)
            m[w]=k
for _ in range(int(input())): print(m[input()])
    
