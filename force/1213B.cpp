#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int m=INT_MAX;
		long long sum=0;
		for(int i=n-1;i>=0;i--)
		{
		    if(a[i]<=m)
		        m=a[i];
			else
			    sum++;
 
		}
		cout<<sum<<"\n";
	}
	return 0;
 
}