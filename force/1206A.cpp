#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(binary_search(a,a+n,a[i]+b[j])||binary_search(b,b+m,a[i]+b[j]));
			else{
				cout<<a[i]<<" "<<b[j];
				i=n;
				break;
			}
		}
	return 0;
}