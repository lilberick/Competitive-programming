#https://codeforces.com/problemset/problem/1625/A
#Lang		:	Python 3.8
#Time		:	139 ms
#Memory	:	200 KB
t=int(input())
for z in range(0,t):
    n,l = map(int, input().split())
    x=list(map(int,input().split()))
    lista=[]
    for i in x:
        lista.append(format(i,'b').zfill(l))
    v=[]
    for i in lista:
        col=[]
        for j in i:
            col.append(int(j))
        v.append(col)
    vt=[*zip(*v)]
    respuesta=[]
    for i in vt:
        n0=i.count(0)
        n1=i.count(1)
        respuesta.append(0) if (n0>=n1) else respuesta.append(1)
    r=0
    respuesta.reverse()
    for i,valor in enumerate(respuesta):
        r+=valor*pow(2,i)
    print(r)
