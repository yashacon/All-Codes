#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	long long sum=0;
	long long sum2=0;

	for(int i=0;i<n;i++){
		cin>>a[i];

		sum-=a[i];

	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		sum2+=a[i];

	}	
	if(sum%2==0)
	{
		if(a[n-1]>sum2)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;

	return 0;
}