#https://codeforces.com/problemset/problem/831/B
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
a,b,c,m=input(),input(),input(),{}
for i in range(len(a)):
    m[a[i]]=b[i];
    m[a[i].upper()]=b[i].upper()
for i in range(len(c)):
    print(c[i] if (ord(c[i])>47 and ord(c[i])<58) else m[c[i]],end='')
