# -*- coding: utf-8 -*-
"""
Created on Wed Sep 30 22:18:17 2020

1.2入力
input()：入力から1行を読み込み、文字列に変換して（末尾の改行を除いて）返す
map()：function の結果を返しながら、全ての要素に適用する iterator を返す
str.split()：文字列を区切った単語のリストで返す
"""

#ABC007A
print(int(input())-1)

#ABC020A
print("ABC" if int(input())==1 else "chokudai")

#ABC070A
s = input()
print("Yes" if s==s[::-1]  else "No")

#ABC079A
s = input()
print("Yes" if (s[1]==s[2] and (s[0]==s[1] or s[3]==s[1]))   else "No")

#ABC131A
s = input()
print("Good" if s[0]!=s[1] and s[1]!=s[2] and s[2]!=s[3]  else "Bad")

#ABC012A
a,b = map(int,input().split())
print(b,a)

#ABC149A
s,t = input().split()
print(t,s,sep="")

#ABC051A
a,b,c = input().split(",")
print(a,b,c,sep=" ")

#ABC056A
a,b = input().split()
print("H" if (a=="H" and b=="H") or (a=="D" and b=="D") else "D")

#ABC110A
a,b,c = sorted(map(int,input().split()))
print(c*10+b+a)

#ABC116A
a,b,c = map(int,input().split())
print(int(a*b*0.5))

#ABC051A
b = *input().split(",")
print(a,len(b),c,sep="")

#ABC103A
b = sorted(map(int,input().split()))
print(abs(b[1]-b[0])+abs(b[2]-b[1]))

*b, = map(int,input().split())
print(abs(b[1]-b[0])+abs(b[2]-b[1]))

#ABC044A
n= int(input())
k= int(input())
x= int(input())
y= int(input())
#a,b,c,d = [int(input()) for i in range(4)]
print(x*n if k>=n else (n-k)*y+x*k)

#ABC087B
n = int(input())
d = set(list([int(input()) for i in range(n)]))
print(len(d))

#ABC091B
n = [input() for _ in range(int(input()))]
m = [input() for _ in range(int(input()))]
l = list(set(n))
print(max(0,max(n.count(l[i])-m.count(l[i])))  for i in range(len(l)))

#ABC031B
l,h = map(int,input().split())
n = int(input())
a = [int(input()) for i in range(n)]
for i in range(n):
    if a[i] < l :
        print(l-a[i])
    elif a[i]<=h :
        print(0)
    else :
        print(-1)

#ABC112B
n,T = map(int,input().split())
ans = 1001
for i in range(n):
    c,t = map(int,input().split())
    if t <= T :
        ans = min(ans,c)
        
print(ans if ans!=1001 else "TLE")  
  
#ABC033B
n = int(input())
S = []
P = []
for i in range(n):
    s,p = input().split()
    S.append(s)
    P.append(int(p))

print(S[P.index(max(P))] if max(P)>(sum(P)/2) else "atcoder")    


#ABC037B
n,q = map(int,input().split())
L = [0]*n

for i in range(q):
    l,r,t = map(int,input().split())
    for j in range(l,r+1):
        L[j-1] = t

for i in L:
    print(i)


#ABC094B
n,m,x = map(int,input().split())
l = [0]*n
a = list(map(int,input().split()))
for i in a:
    l[i-1] = 1

left = sum(l[:x])
right = sum(l[x-1:len(l)])

print(left if left<=right else right)


#ABC118B
n,m = map(int,input().split())
l = [0]*m
for i in range(n):
    k,*a = map(int,input().split())
    for j in range(k):
        l[a[j]-1]+=1

print(l.count(n))
    
#ABC121B
n,m,c = map(int,input().split())
b = list(map(int,input().split()))
ans = 0
for i in range(n):
    tmp = 0
    a = list(map(int,input().split()))
    for j in range(m):
        tmp+=a[j]*b[j]
    if tmp+c>0 :
        ans+=1

print(ans)











    


