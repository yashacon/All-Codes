#include<bits/stdc++.h>
using namespace std;
int tru(int a[],int *y,int x,int n)
{
	int gmx=-1,mx=-1,min=n;
	for(int i=0;i<n;i++)
	{
		if(a[i]<x)
		{
			if(mx!=-1&&a[mx]>a[i])
				return 0;
			mx=i;
			y[i]=1;

		}
		else if(a[i]>x)
		{

			if(gmx!=-1&&a[gmx]>a[i])
				return 0;
			gmx=i;
			y[i]=2;
			if(min==n)
				min=i;
		}

	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			if(i>mx)
				y[i]=1;
			else if(i<min)
				y[i]=2;
			else
				return 0;
		}
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int no[n],ans[n];
		for(int i=0;i<n;i++)
			no[i]=s[i]-'0';
		int i;
		for(i=0;i<10;i++)
		{
			if(tru(no,ans,i,n))
				break;

		}
		if(i<10)
			for(int k=0;k<n;k++)
				cout<<ans[k];
		else
			cout<<"-";
		cout<<"\n";


	}
	return 0;
}