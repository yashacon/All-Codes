#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	long long int a[n][n];
	int fill=0;
	for(int i=0;i<n/2;i++)
		for(int j=0;j<n/2;j++)
		{
			a[i][j]=4*fill+1;
			a[i][j+n/2]=4*fill+2;
			a[i+n/2][j]=4*fill+3;
			a[i+n/2][j+n/2]=4*fill;
			fill++;
		}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}