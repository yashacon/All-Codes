#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long cache[50+1][50+1];

ll ncr(ll n,ll r)
{
	if(cache[n][r]==-1)
	cache[n][r] = ncr(n-1,r)+ncr(n-1,r-1);
	return cache[n][r];
}
ll get_ncr(ll n,ll r)
{
    ll i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cache[i][j]=-1;
		}
	}

	for(i=1;i<=n;i++)
	{
		cache[i][0]=1;
		cache[i][i]=1;
	}
	return ncr(n,r);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
    	ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		vector <ll> v;
		for(ll i=0;i<k;i++)
			v.push_back(a[i]);
		for(auto it=v.begin()+1;it!=v.end();it++)
		{
			if(*it==*prev(it)){
				v.erase(it);
				it--;
			}
		}
		ll i=0,ans=1;
		ll count[v.size()]={0};
		for(auto it=v.begin();it!=v.end();it++)
		{
			
			while(a[i]==*it && i<n)
			{
				count[it-v.begin()]++;
				i++;
			}
		}
		ll check=0;
		for(auto it=v.begin();it!=prev(v.end());it++)
			check+=count[it-v.begin()];
		if(k==check)
		    ans=1;
		else
		ans*=get_ncr(count[prev(v.end())-v.begin()],k-check);
		cout<<ans<<" \n";
	}
	return 0;
}