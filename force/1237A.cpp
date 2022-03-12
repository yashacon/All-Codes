#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	bool flag=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]&1){
			if(flag && a[i]>0)
			{
				a[i]/=2;
				a[i]++;
				flag^=1;
			}
			else if(flag && a[i]<0)
			{
				a[i]/=2;
				flag^=1;
			}
			else if(!flag && a[i]<0)
			{
				a[i]/=2;
				a[i]--;
				flag^=1;
			}
			else if(!flag && a[i]>0)
			{
				a[i]/=2;
				flag^=1;
			}
		}
		else{
			a[i]/=2;
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\n";

}