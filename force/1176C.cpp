#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a[n],c[6]={0};
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	long count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==4)
			c[0]++;
		else if(a[i]==8){
			bool flag=0;
			for(int j=0;j<1;j++)
				if(c[j]<c[1]+1)
				{
					flag=1;
					count++;
					break;
				}
			if(!flag)
			c[1]++;
		}
		else if(a[i]==15){
			bool flag=0;
			for(int j=0;j<2;j++)
				if(c[j]<c[2]+1)
				{
					flag=1;
					count++;
					break;
				}
			if(!flag)
			c[2]++;
		}
		else if(a[i]==16){
			bool flag=0;
			for(int j=0;j<3;j++)
				if(c[j]<c[3]+1)
				{
					flag=1;
					count++;
					break;
				}
			if(!flag)
			c[3]++;
		}
		else if(a[i]==23){
			bool flag=0;
			for(int j=0;j<4;j++)
				if(c[j]<c[4]+1)
				{
					flag=1;
					count++;
					break;
				}
			if(!flag)
			c[4]++;
		}
		else if(a[i]==42){
			bool flag=0;
			for(int j=0;j<5;j++)
				if(c[j]<c[5]+1)
				{
					flag=1;
					count++;
					break;
				}
			if(!flag)
			c[5]++;
		}


	}
	int ans=INT_MAX;
	for(int i=0;i<6;i++)
		ans=min(ans,c[i]);
	for(int i=0;i<6;i++)
	{
		count+=(c[i]-ans);
	}
	cout<<count<<"\n";
}