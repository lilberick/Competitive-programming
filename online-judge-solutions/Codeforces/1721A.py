#https://codeforces.com/problemset/problem/1721/A
#Lang		:	Python 3.8
#Time		:	61 ms
#Memory         :	0 KB
for _ in range(int(input())):
    a,b,s=input(),input(),set()
    s.update(a+b);
    print(len(s)-1)
