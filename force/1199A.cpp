#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int j=i-x;
		int k=i+y;
		if(j<0)	j=0;
		if(k>n-1) k=n-1;
		int min=INT_MAX,index=-1;
		for(int l=j;l<=k;l++)
		{
			if(min>a[l])
			{
				min=a[l];
				index=l;
			}
		}
		if(index==i)
		{
			cout<<index+1<<"\n";
			break;
		}
		else
		{
			i=index-1;
		}
	}
	return 0;
}