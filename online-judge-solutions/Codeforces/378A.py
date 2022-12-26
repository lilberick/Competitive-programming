#https://codeforces.com/problemset/problem/378/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
a,b=map(int,input().split())
a1=a
if(a>b): a,b=b,a
k=int((b-a)-1)/2
if(a==b): print("0 6 0")
elif(a1==a): print(int(a+k),int((b-a)%2==0),int(7+k-b))
else: print(int(7+k-b),int((b-a)%2==0),int(a+k))
