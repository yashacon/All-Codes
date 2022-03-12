#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int b,g,n;
	cin>>b>>g>>n;
	if(b>=n&&g>=n)
	{
		cout<<(n+1)<<"\n";
	}
	else
	{
		if(g>b) swap(b,g);
		if(n-b<0)
		cout<<g+1<<"\n";
		else
		cout<<g+1-(n-b)<<"\n";
	}
	return 0;
}