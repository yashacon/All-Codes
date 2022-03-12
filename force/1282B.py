t=int(input())
for l in range(0,t):
	n,p,k=[int(i) for i in input().split()]
	lis=list(map(int,input().split()))
	lis.sort()
	#print(lis)
	dp=[]
	dp.append(lis[0])
	for i in range(1,k-1):
		dp.append(dp[i-1]+lis[i])
	dp.append(lis[k-1])

	for i in range(k,n):
		dp.append(min([dp[i-1]+lis[i],dp[i-k]+lis[i]]))
	flag=0
	for i in range(n-1,-1,-1):
		if(dp[i]<=p):
			print(i+1)
			flag=1
			break
				

	if flag==0:
		print(0)	
