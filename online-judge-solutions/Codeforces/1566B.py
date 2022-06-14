#https://codeforces.com/problemset/problem/1566/B
#Lang		:	Python 3.8
#Time		:	155 ms
#Memory     :	2200 KB
def CeroCon(s: str)->int:
    n0=s.count('0')
    consecutivo=1
    v=[]
    if(n0==0):consecutivo=0
    else:
        for i in range(len(s)):
            if(s[i]=='0'):v.append(i)
        if(len(s)==1):
            if(s=="1"):consecutivo=0
        else:
            for i in range(1,len(v)):
                if((v[i]-v[i-1])>1):consecutivo=0
    return consecutivo
while True:
    try:
        t=int(input())
        for k in range(0,t):
            s=input()
            n1=s.count('1')
            n0=s.count('0')
            r=0
            if(n0==0):r=0
            elif(n1==0):r=1
            else:
                if(CeroCon(s)):r=1
                else:r=2
            print(r)
    except EOFError:
        break
