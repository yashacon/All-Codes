#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,n;
	cin>>q;
	while(q--)
	{
		cin>>n;
		int a[4*n];
		for(int i=0;i<4*n;i++)
			cin>>a[i];
		sort(a,a+(4*n));
		int l,r;
		long prod1=a[0]*a[(4*n)-1];
		bool flag=0;
		for(int  i=0;i<n;i++)
		{
			l=i*2;r=4*n-(i*2)-1;
			if(a[l]!=a[l+1]||a[r]!=a[r-1]||a[l]*a[r]!=prod1){
				flag=1;
				break;
			}

		}
		if(!flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}