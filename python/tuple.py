"""
tuple

"""
#ABC085C

n,Y = map(int,input().split())
ans = -1,-1,-1
for x in range(n+1):
    for y in range(n-x+1):
        z = n - x - y 
        if 0 <= z <=2000 and (10000*x+5000*y+z*1000)==Y:
            ans = x,y,z
            break
        else :
            continue
        break
print(*ans)

#ABC051A
s = input().split(",")
print(*s, sep=" ")

#ABC042B
n,l = map(int,input().split())
s = sorted([input() for i in range(n)])
print(*s,sep="")

#ABC148B
n = int(input())
s,t = input().split()
print(*[i+j for i,j in zip(s,t)],sep="")

#Tenka1 Programmer Beginner Contest 2019 B
n = int(input())
s = input()
k = int(input())
tr = s[k-1]
for i in s:
    print(i if i==tr else "*",end="")


"""
末尾文字の指定
"""
#ABC058B
o = list(input())
e = list(input())+[""]
for s,t in zip(o,e):
    print(s+t,end="")

"""
1.2入力
input()：入力から1行を読み込み、文字列に変換して（末尾の改行を除いて）返す
map()：function の結果を返しながら、全ての要素に適用する iterator を返す
str.split()：文字列を区切った単語のリストで返す
"""

#ABC007A
print(int(input())-1)


























