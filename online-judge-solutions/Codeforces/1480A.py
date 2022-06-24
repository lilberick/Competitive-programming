#https://codeforces.com/problemset/problem/1480/A
#Lang		:	Python 3.8
#Time		:	93 ms
#Memory     :	0 KB
def cp(c: str)->str:
    if(c=='a'): return 'b'
    return 'a'
def ci(c: str)->str:
    if(c=='z'): return 'y'
    return 'z'
t=int(input())
for x in range(t):
    s=input()
    for i in range(len(s)):
        if(i%2==0):print(cp(s[i]),end="")
        else:print(ci(s[i]),end="")
    print("\n")
