#https://codeforces.com/problemset/problem/78/A
#Lang		:	Python 3.8
#Time		:	92 ms
#Memory         :	0 KB
a,r=[5,7,5],True
for z in range(3):
    s=input()
    vocales=0
    for i in range(len(s)):
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'): vocales+=1
    if(vocales!=a[z]): r=False
print("YES" if r else "NO")
