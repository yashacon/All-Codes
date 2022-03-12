#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arra[10]={0};
	int n;
	cin>>n;
	char ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int lp=0,rp=9;
	for(int i=0;i<n;i++)
	{
		if(ar[i]=='L')
		{
			while(arra[lp]!=0) lp++;
			arra[lp++]=1;

		}
		else if(ar[i]=='R')
		{
			while(arra[rp]!=0) rp--;
			arra[rp--]=1;
		}
		else
		{
			arra[(int)ar[i]-48]=0;
			if((int)ar[i]-48<lp)
				lp=(int)ar[i]-48;
			else if((int)ar[i]-48>rp)
				rp=(int)ar[i]-48;
		}
	}
	for(int i=0;i<10;i++)
		cout<<arra[i];
	cout<<endl;

}