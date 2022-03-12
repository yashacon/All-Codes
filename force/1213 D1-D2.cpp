#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	ios
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector <vector<int>> v(200011);
	for(int i=0;i<n;i++)
	{
		int x=a[i];
		int cur=0;
		while(x>0)
		{
			v[x].push_back(cur);
			cur++;
			x/=2;

		}
	}
	int mi=INT_MAX;
	for(int i=0;i<200000;i++)
	{
		if(int(v[i].size())>=k)
		{
			sort(v[i].begin(),v[i].end());
			mi=min(mi,accumulate(v[i].begin(),v[i].begin()+k,0));
		}
	}
	cout<<mi<<"\n";
	return 0;
}