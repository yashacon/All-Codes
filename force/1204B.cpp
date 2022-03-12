#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	int copy=n;
	long long int ms=n-l;
	int arr[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576};
	for(int i=0;i<l;i++){
		ms+=arr[i];
	}
	int i;
	long long int maxs=0;
	for(i=0;i<r;i++){
		maxs+=arr[i];
		copy--;
	}
	i--;
	maxs+=(n-r)*arr[i];
	cout<<ms<<" "<<maxs<<endl;
	return 0;
}