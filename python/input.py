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
print("H" if (a=="H" and b=="H") or (a=="D" and b=="H") else "D")
