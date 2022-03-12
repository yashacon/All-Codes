#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		lli a,b,n;
		cin>>a>>b>>n;
		lli f[3];
		f[0]=a;
		f[1]=b;
		f[2]=a^b;
		cout<<f[n%3]<<"\n";
	}
	return 0;
}