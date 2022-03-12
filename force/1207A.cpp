#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b,f,p,h,c;
		cin>>b>>p>>f;
		cin>>h>>c;
		int prof=0;
		b=b/2;
		if(h<c) swap(h,c),swap(f,p);
		prof+=h*min(b,p);
		b-=min(b,p);
		prof+=c*min(b,f);
		cout<<prof<<endl;
	}
	return 0;
}