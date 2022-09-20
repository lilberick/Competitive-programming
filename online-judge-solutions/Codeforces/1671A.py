#https://codeforces.com/problemset/problem/1671/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory         :	0 KB
for _ in range(int(input())):
    s=input()
    if(len(s)==1 or s.find("aba")!=-1 or s.find("bab")!=-1 or s[:2]=="ab" or s[:2]=="ba" or s[len(s)-2:]=="ab" or s[len(s)-2:]=="ba"): print("NO")
    else: print("YES")
