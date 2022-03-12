#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int od=0,c=0;
	long long int sum=0,a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			sum+=(-1*a[i])-1;
			od++;

		}
		else if(a[i]>0)
		{
			sum+=a[i]-1;

		}
		else{
			c++;
			sum++;
		}
	}
	if(od%2)
	{
		if(c>0);
		else
		{
			sum+=2;
		}

	}
	cout<<sum<<endl;	
	return 0;

}