#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll q;
	cin>>q;
	bool flag=1;
	for(int i=0;i<q;i++)
	{
		if(flag^1)
		{
			for(int j=0;j<q;j++)
			{
				if(j&1)
					cout<<"B";
				else
					cout<<"W";
			}
			flag^=1;
		}
		else
		{
			for(int j=0;j<q;j++)
			{
				if(j&1)
					cout<<"W";
				else
					cout<<"B";
			}
			flag^=1;
		}
		cout<<"\n";
	}
}