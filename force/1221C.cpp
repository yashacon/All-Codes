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
	while(q--)
	{
		ll c,m,x;
		cin>>c>>m>>x;
		if(m<c)
			swap(c,m);
		if(m+x-c>=c)
		{
			cout<<c<<"\n";
		}
		else
		{
			ll v=m+x-c;
			ll p=c-m+c-x;
			p=(p*2)/3;
			cout<<v+p<<"\n";
		}
 
	}
	return 0;
}