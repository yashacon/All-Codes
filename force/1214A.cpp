#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin>>n;
	int dc,ec;
	cin>>dc>>ec;
	ec*=5;
	int ans1=n;
	int q=n/ec;
	int h;
	for(int i=0;i<=q;i++)
	{
		h=(n-i*ec)%dc;
		ans1=min(ans1,h);
	}

	cout<<ans1<<"\n";



}