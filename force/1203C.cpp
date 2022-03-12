#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long g=0;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		g=__gcd(g,x);
	}
	int count=0;
	for(int i=1;i*i<=g;i++)
		if(g%i==0)
		{
			count++;
			if(i!=g/i)
				count++;
		}
	cout<<count<<endl;
	return 0;
}