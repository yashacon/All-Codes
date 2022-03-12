#include<bits/stdc++.h>
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
		int n,m;
		cin>>n>>m;
		char a[n+1][m+1];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		vector<pair<long long,long long>> v,v2;
		for(int i=0;i<n;i++)
		{
			int count =0;
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='.')
					count++;
			}
			v.push_back(make_pair(count,i));
		}
		for(int i=0;i<m;i++)
		{
			int count =0;
			for(int j=0;j<n;j++)
			{
				if(a[j][i]=='.')
					count++;
			}
			v2.push_back(make_pair(count,i));
		}
		sort(v.begin(),v.end());
		sort(v2.begin(),v2.end());
		int ans=INT_MAX;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				int c=v[i].first+v2[j].first;
				if(a[v[i].second][v2[j].second]=='.')
					c--;
				ans=min(ans,c);
			}
		cout<<ans<<"\n";
	}
}