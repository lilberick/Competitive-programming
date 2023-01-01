#https://codeforces.com/problemset/problem/411/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
s=input()
print("Correct" if (len(s)>=5 and any(c.isupper() for c in s) and any(c.islower() for c in s) and any(c.isdigit() for c in s)) else "Too weak")
