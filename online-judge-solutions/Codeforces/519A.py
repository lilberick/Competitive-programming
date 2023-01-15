#https://codeforces.com/problemset/problem/519/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
m,w,b={'Q':9,'R':5,'B':3,'N':3,'P':1,'q':9,'r':5,'b':3,'n':3,'p':1},0,0
while True:
    try:
        for c in input():
            if c in m: w,b=(w+m[c],b) if c.isupper() else (w,b+m[c])
    except EOFError: break
print("White" if w>b else ("Draw" if w==b else "Black"))
