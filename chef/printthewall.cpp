#include<bits/stdc++.h>
using namespace std;
int maxi(int lower,long int array[],int y)
{
	int i,j,max=-1;
	for(i=lower+1;i<=y;i++)
	{
		if(max<=array[i])
			{
			    max=array[i];
			    j=i;
			}
	}
	return j;

}
int main(){
	int n,m,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		int count=0;
		long int h[n],c[n],max=0;
		for(int j=0;j<n;j++)
			cin>>h[j];
		for(int j=0;j<n;j++)
			cin>>c[j];
		int lower=-1;
		int prev;
			lower=maxi(lower,h,n-1);
			count++;
			if(lower!=n-1)
			while(lower<n-1)
			{
				prev=lower;
				lower=maxi(lower,h,n-1);
				if(c[prev]!=c[lower])
				count++;
			}
			cout<<count<<endl;

		
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		int count=0;
		long int h[n],c[n],max;
		for(int j=0;j<n;j++)
			cin>>h[j];
		for(int j=0;j<n;j++)
			cin>>c[j];
		max=h[n-1];
		int pos=n-1;
		count++;
		for(int j=n-1;j>=0;j--)
		{
			if(h[j]>max&&c[pos]!=c[j])
			{
				count++;
				max=h[j];
				pos=j;
			}

		}
		cout<<count<<endl;
	}
	return 0;
}