#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll c;
	map<ll,ll> m;
	set<ll> s;
	for(ll i=0;i<n;i++){
		cin>>c;
		m[c]++;
		s.insert(c);
	}
	vector<ll> v;
	for(auto it:s)
		v.push_back(it);
	ll dp[v.size()+1][k+1];
	for(int i=0;i<v.size()+1;i++)
		for(int j=0;j<k+1;j++)
		{
			if(j==0 )
				dp[i][j]=1;
			else if(j>i)
				dp[i][j]=0;
			else
				dp[i][j]=(dp[i-1][j]%MOD)+((dp[i-1][j-1]*m[v[i-1]])%MOD);
		}
	ll ans=0;
	for(int i=0;i<k+1;i++)
		ans+=(dp[s.size()][i]%MOD);
	cout<<ans%MOD<<"\n";
}