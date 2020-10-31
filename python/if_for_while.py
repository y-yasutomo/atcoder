# -*- coding: utf-8 -*-
"""
第3章 制御フロー観点
3.1 条件式
"""
#ABC016B
a,b,c = map(int,input().split())
if a+b==c and a-b==c:
    ans = '?'
elif a+b==c and a-b!=c:
    ans = "+"
elif a+b!=c and a-b==c:
    ans = "-"
else :
    ans = "!"    
print(ans)

#ABC059B
a = int(input())
b = int(input())
print("GREATER" if a>b else "LESS" if a<b else "EQUAL")

#ABC034A
x,y = map(int,input().split())
print("Better" if y>x else "Worse")

#ABC065A
x,a,b = map(int,input().split())
print("dangerous" if x<(b-a) else "safe" if a<b else "delicious")

#ABC083A
a,b,c,d = map(int,input().split())
print("Left" if a+b>c+d else "Right" if a+b<c+d else "Balanced")

#ABC112A
n = int(input())
if n ==1 :
    print("Hello World")
else :  
    a = int(input())
    b = int(input())
    print(a+b)

#ABC138A
a = int(input())
s = input()
print(s if a>=3200 else "red")

#ABC150A
k,x = map(int,input().split())
print("Yes" if k*500>=x else "No")

#ABC152A
n,m = map(int,input().split())
print("Yes" if n==m else "No")

#ABC156A
n,r = map(int,input().split())
print(r if n>=10 else r+(10-n)*100)

###
###if/in文
###

#ABC033C
s = input().split("+")
ans = len(s)
cnt = 0
for i in s :
    cnt += "0" in i   
print(ans-cnt)

#ABC089B
n = int(input())
s = input()
print("Four" if "Y" in s else "Three")

#ABC103B
s = input()
t = input()
print("Yes" if t in s*2 else "No")

#ABC122B
s = input()
ans = 0 
tmp = 0 
for i in s :
    if i == "A" or i == "T" or i == "G" or i == "C" :
        tmp+=1
    else :
        tmp = 0
    ans = max(tmp,ans)
print(ans)

#ABC006B
n = int(input())
print("YES" if n%3==0 else "NO")

#ABC073A
n = input()
print("Yes" if "9" in n else "No")

#ABC109A
a,b = map(int,input().split())
a*=b
print("Yes" if a%2!=0 else "No")

#ABC114A
x = input()
print("YES" if "7" in x or "5" in x or "3" in x else "NO")

"""
複数条件式
"""
#ABC061A
a,b,c = map(int,input().split())
print("Yes" if a<=c<=b else "No")


"""
3.2 繰り返し文
for文
"""
#ARC010A
n,m,a,b = map(int,input().split())
day = 0
for i in range(m) :
    day+=1
    if n<=a : n+= b
    c = int(input())
    n-= c
    if n<0 :
        break
if n<0 :
    print(day)
else :
    print("complete")
    
#ARC036A
n,k = map(int,input().split())
t = [int(input()) for _ in range(n)]
for i in range(3,n) :
    suimin = sum(t[i-3:i])
    if suimin < k :
        print(i)
        break
else :
    print(-1)

#ABC136C##
n = int(input())
h = list(map(int,input().split()))
ans = False ;
base = 0
for i in h :
    if base > i :
        print("NO")
        break
    base = max(base,i-1)
else :
    print("Yes")

#ABC144C
n = int(input())
num = 0 
for i in range(1,int(n**0.5)+1):
    if n%i == 0 :
        num = i

num2 = n // num
print(num-1+num2-1)
    

#ABC157C
def main() :
    n,m = map(int,input().split())
    sc = [list(map(int,input().split())) for i in range(m)]
    for i in range(10**(n)):
        target = str(i)
        tmp = True
        if len(target)==n :
            for j in range(m):
                if str(sc[j][1]) != target[sc[j][0]-1] :
                    tmp =False
            if tmp :
                print(i)
                return 
    print("-1")
    return 

if __name__=='__main__':
    main()
    
    
#ABC158C
def main() :
    a,b = map(int,input().split())
    for i in range(1,1100):
        rem1 = int(i * 1.08 - i)
        rem2 = int(i * 1.1 - i)
        if rem1 == a and  rem2 == b :
            print(i)
            return
    print("-1")
    return     

if __name__=='__main__':
    main()

   
#ABC144B
def main() :
    n = int(input())
    for i in range(1,10):
        if n%i == 0 :
            if n/i < 10 :
                print("Yes")
                return
    print("No")
    return     

if __name__=='__main__':
    main()

#ABC149C
def main() :
    x = int(input())
    while True :
        for i in range(2,x) :
            if x%i == 0 :
                break
        else :
            print(x)
            break
        x+=1
    return    

if __name__=='__main__':
    main()

#ABC045B
def main() :
    a = input()
    b = input()
    c = input()
    nexts = a[0]
    a = a[1::]
    while True :
        if nexts == 'a' :
            if len(a) == 0 :
                ans = "A"
                break
            nexts = a[0]
            a = a[1::]
        elif nexts == 'b' :
            if len(b) == 0 :
                ans = "B"
                break
            nexts = b[0]
            b = b[1::]        
        else :
            if len(c) == 0 : 
                ans = "C"
                break
            nexts = c[0]
            c = c[1::]
    print(ans)
    return    

if __name__=='__main__':
    main()

#ABC065B
def main() :
    n = int(input())
    a = [int(input()) for i in range(n)]
    target = a[0]
    ans = 0 
    while True :
        if target == 2 :
            ans+=1
            break
        ans+=1
        target = a[target-1]
        if ans > 100100 :
            print(-1)
            return
    print(ans) 

if __name__=='__main__':
    main()

#ABC066B
def main() :
    s = input()
    while len(s)>1 :
        s = s[:len(s)-1]
        if len(s) %2 == 0 :
            if s[:int(len(s)/2)] == s[int(len(s)/2):] :
                print(len(s))
                return

if __name__=='__main__':
    main()


#ABC081B
n = int(input())
a = list(map(int,input().split()))
cnt = 0    
while all(i%2==0 for i in a) :
    a = [i/2 for i in a]
    cnt+=1
print(cnt)

#ABC116B
s = int(input())
a = []
a.append(s)
while True :
    if a[len(a)-1]%2 == 0 :
        a.append(a[len(a)-1]/2)
    else :
        a.append(a[len(a)-1]*3+1)
    if a[len(a)-1] in a[:len(a)-1] :
        print(len(a))
        break

#ABC032A
a = int(input())
b = int(input())
n = int(input())
while True :
    if n%a ==0 and n%b == 0 :
        break
    n+=1
print(n)


        
















