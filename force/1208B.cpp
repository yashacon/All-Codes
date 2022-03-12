#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	lli a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=n-1;
	map<int,int> f;
	for(int i=0;i<n;i++)
	{
		bool valid=true;
		for(int j=0;j<i;j++)
		{
			f[a[j]]++;
			if(f[a[j]]==2){
				valid=0;
				break;

			}
		}
		if(valid){
		int minind=n;
		for(int j=n-1;j>=i;j--)
		{
			f[a[j]]++;
			if(f[a[j]]==1)
				minind=j;
			else
				break;
		}
		ans=min(ans,minind-i);
		}	
		f.clear();
	}
	cout<<ans<<"\n";
	return 0;
}