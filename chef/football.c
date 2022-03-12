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
		int a[n],b[n],res[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		int max=INT_MIN;
		for(int i=0;i<n;i++)
		{
			res[i]=a[i]*20-b[i]*10;
			if(res[i]<0)
				res[i]=0;
			if(res[i]>max)
				max=res[i];
		}
		cout<<max<<endl;
	}
}