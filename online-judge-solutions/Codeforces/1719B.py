#https://codeforces.com/problemset/problem/1719/B
#Lang		:	Python 3.8
#Time		:	390 ms
#Memory         :	7100 KB
for _ in range(int(input())):
    n,k=map(int,input().split())
    v=[i+1 for i in range(n)]
    if(k%4==0):print("NO")
    else:
        print("YES")
        if(k%4==1 or k%4==3):
            for i in range(0,len(v),2):
                print(v[i],v[i+1])
        else:
            for i in range(0,len(v),2):
                print(str(v[i+1])+" "+str(v[i]) if not (int(i/2))%2 else str(v[i])+" "+str(v[i+1]))

