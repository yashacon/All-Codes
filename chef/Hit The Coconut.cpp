#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,z;
	cin>>t;
	while(t--)
	{
		cin>>n>>z;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int min[n];
		for(int i=0;i<n;i++)
			min[i]=a[i]*(n-i);
		sort(min,min+n);
			cout<<min[0]<<endl;
	}
	return 0;
}