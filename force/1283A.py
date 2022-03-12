# your code goes here
t=int(input())
for _ in range(0,t):
	x=list(map(int,input().split()))
	print(1440-(x[0]*60)-x[1])