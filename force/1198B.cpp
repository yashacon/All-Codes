#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a[300300],l[300300],b[300300],q,p,x,y;
	cin>>n;
	for(int i=1;i<=n;i++) 
		cin>>a[i];
	cin>>q;
	for(int i=1;i<=q;i++) 
	{
		cin>>p;
		if(p==1) 
		{
			cin>>x>>y;
			a[x]=y;l[x]=i;
		}
		if(p==2)
		{
			cin>>x;
			b[i]=x;
		}
	}
	for(int i=q-1;i>=0;i--) 
		b[i]=max(b[i],b[i+1]);
	for(int i=1;i<=n;i++) 
		cout<<max(a[i],b[l[i]])<<" ";
	return 0;
}