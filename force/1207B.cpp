#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	bool ar[n+5][m+5]={0,0};
	vector<pair<int,int>>v;
	int ans=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>ar[i][j];
	int b[n+5][m+5]={0,0};
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(ar[i][j]==1&&ar[i+1][j]==1&&ar[i][j+1]==1&&ar[i+1][j+1]==1)
			{
				ans++;
				b[i][j]=1,b[i+1][j]=1,b[i][j+1]=1,b[i+1][j+1]=1;
				v.push_back(make_pair(i,j));
			}
	for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) 
        	if(ar[i][j] ^ b[i][j]) cout<<-1<<endl,return 0;
	if(ans==0)
		cout<<0<<endl;
	else
	{
		cout<<ans<<endl;
		for(int i=0;i<ans;i++)
			cout<<v[i].first<<" "<<v[i].second<<endl;
	
	}
	
	return 0;
}