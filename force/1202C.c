#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(long i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long long mid=(n+1)/2;
	long long diff[mid];
	diff[0]=a[mid-1];
	for(long long i=mid;i<n;i++)
		diff[i-n/2]=a[i]-a[i-1];
	long long i;
	for(i=1;i<mid;i++)
	{
		if(i*diff[i]<=k){
			diff[0]+=diff[i];
			k-=i*diff[i];
			diff[i]=0;
		}
		if(i*diff[i]>k){
			cout<<diff[0]+k/(i);
			return 0;
		} 
	}
	
		cout<<diff[0]+k/(i);
	
	return 0;
}