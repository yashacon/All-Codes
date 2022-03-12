lis=[]
lis1=[]
n,m=input().split()
n=int(n)
m=int(m)
lis = list(map(str, input().split()))
d=lis.pop()
lis.insert(0,d)
#print(lis)
lis1 = list(map(str, input().split()))
d=lis1.pop()
lis1.insert(0,d)
#print(lis1)
k=int(input())
for _ in range (0,k):
	c=int(input())
	print(lis[c%n]+lis1[c%m])