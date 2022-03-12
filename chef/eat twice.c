#include<bits/stdc++.h>
using namespace std;
struct ar{
	long d;
	long v;
};
bool sec(ar lhs,ar rhs){
	return lhs.v<rhs.v;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		struct ar a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i].d>>a[i].v;
		}
		sort(a,a+n,sec);
		long sum=a[n-1].v;
		for(int i=n-2;i>=0;i--)
		{
			if(a[i].d!=a[n-1].d)
			{
				sum+=a[i].v;
				break;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}