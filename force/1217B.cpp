#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll z,y,mxdiff=0,mxele=0;
		for(ll i=0;i<n;i++){
			cin>>z>>y;
			mxdiff=max(mxdiff,z-y);
			mxele=max(mxele,z);
		}
		//cout<<mxdiff<<mxele<<" ";
		x-=mxele;
		if(x<=0)
		{
			cout<<"1\n";
			continue;
		}
		if(mxdiff==0)
		{
			cout<<-1<<"\n";
			continue;
		}
		
		
		cout<<(x+mxdiff-1)/mxdiff+1<<"\n";

	}
}