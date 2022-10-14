#https://codeforces.com/problemset/problem/1633/B
#Lang		:	Python 3.8
#Time		:	109 ms
#Memory         :	500 KB
for _ in range(int(input())):
    s=input()
    n0,n1=s.count('0'),s.count('1');
    print(min(n0,n1)-(n0==n1))
