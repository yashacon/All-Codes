#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	IOS
	int n,k;
	cin>>n>>k;
	int ans=n;
	if(k<=(n/2))
	{
		ans+=(k-1)*2;
		ans+=n-k;
	}
	else
	{
		ans+=(n-k)*2;
		ans+=k-1;
	}
	ans+=n+1;
	cout<<ans<<"\n";

}