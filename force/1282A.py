t=int(input())
for _ in range(0,t):
	a,b,c,r=[int(x) for x in input().split()]
	l=c-r
	h=c+r
	if a>b:
		a,b=b,a
	if l>=a and l<=b and h>=a and h<=b:
		print(l-a+(b-h))
	elif l>=a and l<=b and h>=b:
		print(l-a)
	elif h>=a and h<=b and l<=a:
		print(b-h)
	elif l>b:
		print(b-a)
	elif h<a:
		print(b-a)
	else:
		print(0)