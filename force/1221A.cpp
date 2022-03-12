#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		map<ll,ll>h;
		ll xx;
		for(int i=0;i<n;i++){
			cin>>xx;
			h[xx]++;

		}
		if(h[2048]>=1)
		{
			cout<<"YES\n";
			continue;
		}
		bool flag=1;
	
		if(flag)
		{
			for(auto it=h.begin();it!=h.end();it++)
			{
				h[2*(it->first)]+=((it->second)/2);
				
			}
			if(h[2048]>=1)
				cout<<"YES\n";
				else
			cout<<"NO\n";

		}
	
	}
	return 0;
}