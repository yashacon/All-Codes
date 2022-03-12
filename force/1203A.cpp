#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,n;
	cin>>q;
	while(q--){
		cin>>n;
		int a[n],index;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1)
				index=i;
		}
		bool ok1=1,ok2=1;
		for(int i=0;i<n;i++)
		{
			ok1&=(a[(index-i+n)%n]==i+1);
			ok2&=(a[(index+i+n)%n]==i+1);
		}
		if(ok1||ok2) cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}