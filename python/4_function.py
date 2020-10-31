# -*- coding: utf-8 -*-
"""
第4章 組み込み型観点
4.1 int
"""
#ABC016B
n = int(input())
ans = 0 
for i in range(n) :
    cur,u = input().split()
    if u == "JPY" :
        ans+= int(cur)
    else :
        ans+= float(cur)*380000
print(ans)

#ABC018A
h,b = map(float,input().split())
print(b*h**2/10000)

"""
4.3 string
"""
#ABC010A
print(input()+"pp")

#ABC020B
a,b = input().split()
print(int(a+b)*2)

#ABC154B
s = input()
print("x"*len(s))

#ABC025A
s = input()
n = int(input())
l = []
for i in range(len(s)) :
    for j in range(len(s)) :
        l.append(s[i]+s[j])
l = sorted(l)
print(l[n-1])    

#ABC059A
a,b,c = input().split()
d = a[0]+b[0]+c[0]
print(d.upper())

#ABC062A
s = "XABACACAACACA"
x,y = map(int,input().split())
print("Yes" if s[x]==s[y] else "No")

#ABC090B
a,b = map(int,input().split())
ans =0 
for i in range(a,b+1) :
    if str(i)==str(i)[::-1] :
        ans+=1
print(ans)

#ABC077A
s = input()
t = input()
print("YES" if s==t[::-1] else "NO")

#ABC147B
s = input()
ans = 0 
for i in range(int(len(s)/2)) :
    if s[i] != s[::-1][i] :
        ans+=1
print(ans)

#ARC019A
s = ["ODIZSB","001258"]
t = input()
for i in range(6) :
        t = t.replace(s[0][i],s[1][i])
print(int(t))

#ARC045A
s = input()
print(s.replace("Left","<").replace("Right",">").replace("AtCoder","A"))

#ABC104B
s = input()
if s[0]=="A" and s[2:-1].count("C") == 1 :
    tmp = s[1] + s[2:-1].replace("C","") + s[len(s)-1]
    if  tmp.islower() :
        print("AC")
    else : print("WA")
else : print("WA")

#ABC017A
ans = 0
for i in range(3) :
    s,t = map(int,input().split())
    ans += s*(t/10)
print(int(ans))

#ABC027A
print(eval(input().replace(" ","^")))


"""
文字列のコピー
"""





















