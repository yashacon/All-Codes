#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie( NULL);
	string s;
	cin>>s;
	long long c_v=0,c_tot=0,c_com=0;
	for(auto it=s.begin();it!=s.end();it++)
	{
		if(*it=='o')
			c_com+=c_v;
		else if(it>s.begin() && *prev(it)=='v')
		{
			c_v++;
			c_tot+=c_com;
		}
		

	}
	cout<<c_tot<<"\n";
}