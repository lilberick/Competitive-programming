#https://codeforces.com/problemset/problem/1085/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
s,t,w=input(),0,''
while(len(s)>0):
    n=len(s)
    i=int((n-1 if t%2==0 else n)/2)
    w+=s[i]
    s=s[0:i]+s[i+1:]
    t+=1
print(w)
