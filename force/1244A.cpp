#include<bits/stdc++.h>

using ll=long long int;
using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		int h=(a)/c;
		int r=a%c;
		if(r>0)
			h++;
		int y=(b)/d;
		r=b%d;
		if(r>0)
			y++;
		if(h+y<=k)
			cout<<h<<" "<<y<<"\n";
		else
			cout<<"-1\n";
	}

	return 0;
}