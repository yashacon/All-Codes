#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string x;
	cin>>x;
	for(int i=0;i<x.length();i++)
	{
		if(i==0 && x[i]=='9');
		else if(x[i]-'0'> 9-(x[i]-'0'))
			x[i]=(9-(x[i]-'0'))+'0';
	}
	cout<<x<<"\n";
	return 0;
}