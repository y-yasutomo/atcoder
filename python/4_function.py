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
#ABC018C
s = input()
n = int(input())
for i in range(n):
    l,r  = map(int,input().split())
    s = s[:l-1]+s[l-1:r][::-1]+s[r:]
print(s)

#ABC043B
s = input()
ans = []
for i in s :
    if i == '0' :
       ans.append('0')
    elif  i == '1' :
       ans.append('1')
    else :
        if len(ans) > 0 :
            ans.pop()
print(*ans,sep="")
        
#ABC071B
#chr(ord("A"))
def main() :
    s = input()
    for i in range(ord("a"),ord("z")+1) :
        if chr(i) in s :
            continue 
        else :
            print(chr(i)) 
            return
    else :
        print("None")
    return        

if __name__ == "__main__" :
    main()
  
#ARC052A
s = input()
ans = []
for i in s :
    if ord(i) < 58 and ord(i) > 47 :
        ans.append(i)
print(*ans,sep="")

"""
文字列の検索
str.find() / str.rfind() ：文字列の検索
"""

'''
#ABC039C
s = input()
ans=["Do","Re","Mi","Fa","So","La","Si"]
idx = 1
d = "WBWBWWBWBWBWWBWBWWBW"
for i in range(10) :
    if s == d :
        if idx == 0 : idx = 7
        print(ans[idx-1])
        break
    d = d[1:]+d[0]
    if d[0] == "B" : 
        continue
    else :
        idx += 1
        idx %= 7
'''

#ABC053B
s = input()
print(s.rfind("Z")-s.find("A")+1)

"""
大文字小文字変換
"""
#ABC011B
s = input()
print(s.capitalize())

"""
listの検索
"""
#ARC003A
n = int(input())
r = input()

dict = {"A" : 4 ,
        "B" : 3 ,
        "C" : 2 ,
        "D" : 1 ,
        "F" : 0 }
print(sum([dict[i] for i in r])/n)

#ARC053A
s = input()
print(len(s)-s[::-1].index("Z")-s.index("A"))

#ABC113B
n = int(input())
t,a = map(int,input().split())
h =list(map(int,input().split()))
ans = 1e9
idx = - 1
for i in range(n) :
    if abs((t-h[i]*0.006)-a) < ans :
        ans = abs((t-h[i]*0.006)-a)
        idx = i+1
print(idx)

#ABC151A
c = input()
print(chr(ord(c)+1))


"""
要素の取り出し
"""
#ARC001A
n = int(input())
s = input()
l = [s.count(i) for i in "1234"]
print(max(l),min(l))

#ABC124C
s = input()
a = []
b = []
for i in range(len(s)):
    if i%2 == 0 :
        a.append("0")
        b.append("1")
    else :
        b.append("0")
        a.append("1")
    
ans,ans2 = 0,0
for i in range(len(s)):
    if s[i]!=a[i] :
        ans+=1
    if s[i]!=b[i] :
        ans2+=1
print(min(ans,ans2))    
    
#ABC044B
w = input()
print("Yes" if any([w.count(i)%2  for i in set(w)])==0 else "No")
    
#ABC009B
n = int(input())
l = [int(input()) for i in range(n)]
l = sorted(set(l))
print(l[-2])

#ABC032B
s = input()
n = int(input())
Set = set()
for i in range(len(s)) :
    if i+n > len(s) : continue
    Set.add(s[i:(i+n)])
print(len(Set))   
 
#ARC005A
n = int(input())
s = input()[:-1].lower().split()
print(s.count("takahashikun"))

#ARC049A
s = input()
a,b,c,d = map(int,input().split())
print(s[:a]+"\""+s[a:b]+"\""+s[b:c]+"\""+s[c:d]+"\"")

#ABC0122C
n,q = map(int,input().split())
s = input()
cnt = [0]*n
for i in range(1,len(s)) :
    cnt[i]+=cnt[i-1]
    if s[i-1] == 'A' and s[i] == 'C' :
        cnt[i]+=1

for i in range(q) :    
    l,r = map(int,input().split())
    print(cnt[r-1]-cnt[l-1])


#ABC153C
n,k = map(int,input().split())
h = sorted(list(map(int,input().split())))[::-1]
print(sum(h[k:]))

#ABC026B
n = int(input())
r = sorted([int(input()) for i in range(n)])[::-1]
ans =  0
add = True
for i in range(n) :
    if add :
        ans += r[i]**2 
        add = False
    else :
        ans -= r[i]**2 
        add = True
print(ans*(355/113)) 

###
n = int(input())
r = sorted([int(input())**2 for i in range(n)])[::-1]
print((sum(r[::2])-sum(r[1::2]))*(355/113)) 
       
        
#ABC067B
n,k = map(int,input().split())
l = sorted(list(map(int,input().split())))[::-1]
print(sum(l[:k]))

#ABC088B
n = int(input())
a = sorted(list(map(int,input().split())))[::-1]
print(sum(a[::2])-sum(a[1::2]))

#ABC093B
a,b,k = map(int,input().split())
l = range(a,b+1)
for i in sorted(set(l[:k])|set(l[-k:])):
    print(i)

#ABC098B
n = int(input())
s = input()
l =[]
for i in range(1,n):
    l.append(len(set(s[:i])&set(s[i:])))
print(max(l))

#ABC114B
s = input()
print(min([abs(753-int(s[i:(i+3)]))  for i in range(len(s)-2)]))

#ABC129B
n = int(input())
w = list(map(int,input().split()))
ans = 1e9+7
for i in range(1,(n+1)):
    l = w[:i]
    r = w[i:]
    ans = min(ans,abs(sum(l)-sum(r)))
print(ans)
    
#ABC087B
a = int(input())
b = int(input())
c = int(input())
x = int(input())
ans = 0 
for i in range(0,a+1):
    for j in range(0,b+1):
        for k in range(0,c+1):
            if 500*i+j*100+k*50 == x :                
                ans+=1
print(ans)

#ABC105B
n = int(input())
ans = False
for i in range(0,26):
    for j in range(0,15):
            if 4*i+j*7 == n :                
                ans = True
                break
print("Yes" if ans else "No")

#ABC128B
n = int(input())
sp = []
for i in range(0,n):
    s,p = input().split()
    sp.append([s,int(p),i+1])
sp = sorted(sp,key=lambda x:(x[0],-x[1]))
for i in range(0,n):
    print(sp[i][2])





















