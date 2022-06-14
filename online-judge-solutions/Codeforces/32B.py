#https://codeforces.com/problemset/problem/32/B
#Lang		:	Python 3.8
#Time		:	92 ms
#Memory	:	0 KB
s=input()
while(len(s)!=0):
    if(s[0]=='.'):print('0',end="")
    else:
        print('1',end="") if s[1]=='.' else print('2',end="")
        s=s[1:]
    s=s[1:]
print('\n')
