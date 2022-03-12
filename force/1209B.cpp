#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i];
	int ar[n];
	for(int i=0;i<n;i++)
		ar[i]=s[i]-'0';
	int ans=0;
	for(int t=0;t<1000;t++)
	{
		int on=0;
		for(int i=0;i<n;i++)
		{
			if(t>=b[i]&&(t-b[i])%a[i]==0)
				ar[i]^=1;
			on+=ar[i];
		}
		ans=max(on,ans);
	}
	cout<<ans<<"\n";
	return 0;
}