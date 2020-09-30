##list
#ABC042B
n,l = map(int,input().split())
s = [input() for i in range(n)]
s = sorted(s)
print(*s,sep="")

#ABC137B
k,x = map(int,input().split())
print(*list(range(x-k+1,x+k)))

#ABC148B
n = int(input())
s , t = input().split()
print(*[i+j for i,j in zip(s,t)],sep="")
