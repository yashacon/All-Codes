#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c[n+1],h[n+1];
		for(int i=1;i<n+1;i++)
			cin>>c[i];
		for(int i=1;i<n+1;i++)
			cin>>h[i];
		int d[n+2]={0};
		for(int i=1;i<n+1;i++)
		{
			int lef=i-c[i];
			int rig=i+c[i];
			
			if(lef<1)
			    lef=1;
			d[lef]++;
			if(rig<n+1)
			 d[rig+1]--;
			
		}
		for(int i=1;i<n+1;i++)
			if(i==1)
				c[i]=d[i];
			else
				c[i]=d[i]+c[i-1];
		c[0]=-1;
		h[0]=-1;
		sort(c,c+n+1);
		sort(h,h+n+1);
		
		bool flag=0;
		for(int i=1;i<n+1;i++)
			if(c[i]!=h[i])
			{   
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
		if(!flag)
		cout<<"YES"<<endl;
	}
	return 0;
}