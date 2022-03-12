#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	ll a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	long double y=sqrt((a[2][1]*a[0][1])/a[0][2]);
	for(int i=0;i<n;i++){
		if(i!=1)
		{
			ll k=a[1][i]/y;
			cout<<k<<" ";
			
		}
		else 
			cout<<y<<" ";
	}

}
