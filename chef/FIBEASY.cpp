#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	long long test[t];
	long long mx=-1;
	for(int i=0;i<t;i++)
	{
		cin>>test[i];
		mx=max(mx,test[i]);

	}
	mx=min(mx,(long long)60);
	mx=max(mx,(long long)2);
	int dp[mx+1];
	dp[1]=0;
	dp[2]=1;
	for(int i=3;i<=mx;i++)
		dp[i]=(dp[i-1]+dp[i-2])%10;
	for(int i=0;i<t;i++)
	{
		long long k=1;
		while(test[i]>(k))
		{
			k*=2;
		}
		if(test[i]==k);
		else
			k/=2;

		cout<<dp[k%60]<<"\n";


	}

}