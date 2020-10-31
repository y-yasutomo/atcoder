# -*- coding: utf-8 -*-
"""
第2章 演算観点
#数値型
#式（expression）
#演算子の優先順位
#真理値判定
#単純文（simple statement）
"""
#ABC063A
a,b = map(int,input().split())
print("error" if a+b>=10 else a+b)

#ABC072A
x,t = map(int,input().split())
print(max(x-t,0))

#ABC076A
r = int(input())
g = int(input())
print(g*2-r)

#ABC084A
print(48-int(input()))

#ABC055B
n = int(input())
ans = 1
MOD = 10**9+7
for i in range(2,n+1):
    ans*=i
    ans = ans%MOD
print(ans)    

#ABC068B
def dev2(a):
    ans = 0 
    while a%2==0:
        ans+=1
        a/=2
        if a == 0 : break
    return ans

n = int(input())
ans = 0 
ans_num = 0
for i in range(1,n+1):
    if ans < dev2(i):
        ans_num = i
        ans = dev2(i)    
print(1 if n==1 else ans_num)

#ABC055A
n = int(input())
print(10**n+7)

#ABC097B
x = int(input())
ans = 1
for i in range(1,x):
    for j in range(2,x):
        if i**j <= x :
            ans = max(ans,i**j)
        else : break

print(ans)

#ABC086B
a,b = input().split()
a += b
a = int(a)
print("Yes" if int((a**.5))**2 == a else "No")

#ABC138C
n = int(input())
v = sorted(list(map(int,input().split())))
ans = (v[0]+v[1])/2
for i in range(2,n):
    ans = (ans+v[i])/2
print(ans)

#ABC078B
x,y,z = map(int,input().split())
ans = 0
i = 1
while 1:
    haba = (i*y)+((i+1)*z)
    if haba>x : break
    else : ans = i
    i+=1
    
print(ans)


#ABC095B
n,x = map(int,input().split())
l = sorted([int(input()) for i in range(n) ])
x-= sum(l)
ans = n
ans += x//l[0]
print(ans)     

#ABC030A
a,b,c,d = map(int,input().split())
ans = ""
if b/a > d/c:
    print("TAKAHASHI")
elif b/a < d/c:
    print("AOKI")
else:
    print("DRAW")
    
#ABC055A
n = int(input())
print(n*800-200*(n//15))
    
#ABC108A
k = int(input())
print(int((k/2)**2 if k%2==0 else (k//2)*((k//2)+1)))

#ABC128A
a,p = map(int,input().split())
print((a*3+p)//2)

#ABC142A
n = int(input())
print(n//2/n if n%2 == 0 else (n//2+1)/n)

#ABC153A
h,a = map(int,input().split())
print(h//a if h%a == 0 else h//a + 1)

#ABC123C
n = int(input())
l = [int(input()) for i in range(5)]
print(((n+min(l)-1)//min(l)) + 4)

#ABC015B
n = int(input())
l = list(map(int,input().split()))
print((sum(l)+(n-l.count(0))-1)//(n-l.count(0)))

#ABC123B
l = [int(input()) for i in range(5)]
lm = l
lm = [(i+9)//10*10 for i in l]
lr = [10-i%10 if i%10!=0 else 0 for i in l]
print(sum(lm)-max(lr))

#ABC082A
a,b = map(int,input().split())
a+=b
print((a+2-1)//2)

#ABC157A
n = int(input())
print((n+2-1)//2)

###剰余
#ABC099C
n = int(input())

#ABC133C
l,r = map(int,input().split())

if r-l >=2019 :
    ans = 0 
else :
    ans = 2019**2
    for i in range(l,r+1):
        for j in range(i+1,r+1):
            tmp = i*j%2019
            ans = min(ans,tmp)
print(ans)    


#ABC034B
n = int(input())
print(n-1 if n%2==0 else n+1)

#ABC060B
a,b,c = map(int,input().split())
ans = False
for i in range(b):
    if a*i%b == c :
        ans = True

print("YES" if ans else "NO")

#ABC146B
n = int(input())
s = input()
ss = [chr(65+(ord(i)-65+n)%26) for i in s ]
print(*ss,sep="")

#ABC008A
n = int(input())
print(n//10*100+(n%10*15) if (n//10*100+(n%10*15))<(((n+10-1)//10)*100) else 
      (((n+10-1)//10)*100))

#ABC009A
n = int(input())
print((n+2-1)//2)

#ABC014A
a = int(input())
b = int(input())
print(((a+b-1)//b)*b-a)

#ABC016A
m,d = map(int,input().split())
print("YES" if m%d==0 else "NO")

#ABC035A
w,h = map(int,input().split())
print("16:9" if w%16==0 and h%9==0 else "4:3")

#ABC054A
a,b = map(int,input().split())
if a==b :
    print("Draw")
elif (a==1 or a>b) and b!=1:
    print("Alice")
else :
    print("Bob")
    
#ABC064A
r,g,b = map(int,input().split())
print("YES" if (r*100+g*10+b)%4 == 0 else "NO")

#ABC067A
a,b = map(int,input().split())
print("Possible" if a%3==0 or b%3==0 or (a+b)%3==0 else "Impossible")

#ABC086A
a,b = map(int,input().split())
print("Odd" if a*b%2!=0 else "Even")

#ABC088A
n = int(input())
a = int(input())
print("Yes" if n%500<=a else "No")

#ABC102A
n = int(input())
print(n if n%2==0 else n*2)

#ABC105A
n,k = map(int,input().split())
print(0 if n%k==0 else 1)

#ABC135A
a,b = map(int,input().split())
print("IMPOSSIBLE" if (a+b)%2!=0 else (a+b)//2)

"""
第2章 演算観点
2.2 代入文
"""
#ABC006B
n = int(input())
a = [0,0,1]
for i in range(3,n):
    a.append((a[i-1]+a[i-2]+a[i-3])%10007)
print(a[n-1])

#ABC079B
n = int(input())
a = [2,1]
for i in range(2,n+1):
    a.append(a[i-1]+a[i-2])
print(a[n])

"""
第2章 演算観点
2.4 倫理演算
"""
#ABC155B
n = int(input())
a = list(map(int,input().split()))
ans = True
for i in a :
    if(i%2==0):
        if(i%3!=0 and i%5!=0):
            ans = False
print("APPROVED" if ans else "DENIED")

#ABC100A
a,b = map(int,input().split())
print("Yay!" if a<=8 and b<=8 else ":(")

#Tenka1 Programmer Beginner Contest 2019 A
a,b,c = map(int,input().split())
print("Yes" if a<c<b or a>c>b else "No")

"""
第2章 演算観点
2.5 比較演算
"""
#ABC082B
s = sorted(input())
t = sorted(input())[::-1]
print("Yes" if s<t else "No")

"""
第2章 演算観点
2.7 ブール演算
"""
#ABC130C
W,H,x,y = map(int,input().split())
print((W*H)/2,int(W==(x*2) and H==(y*2)))









