#include<bits/stdc++.h>
using namespace std;
long long q;
int main()
{
	scanf("%lld",&q);
	for(;q--;)
	{
		long long k,n,a,b;
		scanf("%lld%lld%lld%lld",&k,&n,&a,&b);
		if(k-b*n<=0)
		{
			cout<<-1<<"\n";
		}
		else
		{
			long long ans=(k-b*n-1)/(a-b);
			if(ans>n)ans=n;
			printf("%lld\n",ans);
		}
	}
}