#https://codeforces.com/problemset/problem/99/A
#Lang		:	Python 3.8
#Time		:	124 ms
#Memory         :	0 KB
s=input()
i=s.find('.')
d=int(s[i+1])
e=int(s[i-1])
se=s[:i]
if(e<9):
    if(d>=5):
        e+=1
        se=s[:i-1]+str(e)
    print(se)
else: print("GOTO Vasilisa.")
