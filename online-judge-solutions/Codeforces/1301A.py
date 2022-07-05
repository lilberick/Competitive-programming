#https://codeforces.com/problemset/problem/1301/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
t=int(input())
for x in range(0,t):
    a,b,c=input(),input(),input()
    r=0
    for i in range(len(a)):
        if(c[i]==b[i] or c[i]==a[i]): r+=1
    print("YES") if r==len(a) else print("NO")
