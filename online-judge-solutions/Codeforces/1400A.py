#https://codeforces.com/problemset/problem/1400/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory     :	0 KB
t=int(input())
for x in range(0,t):
    n,s,r=int(input()),input(),""
    if(len(s)==1):print(s)
    else:
        extremo=s[int((2*n-1)/2)];
        for i in range(len(s)):
            if(i%2==0 and i>0 and i<(len(s)-1)): r+=s[i]
        r=extremo+r+extremo
        print(r)
