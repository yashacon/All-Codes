#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t;
	long long n,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		c=n;
		int r,x;
		long long sum=0;
		while(n!=0){
			r=n%10;
			n=n/10;
			sum=sum+r;
		}
		if(sum%10==0)
		cout<<c<<0<<endl;
		else{
		x=sum%10;
		cout<<c<<10-x<<endl;
		}
	}
	return 0;
}