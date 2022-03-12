#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	int marks[m];
	for(int i=0;i<m;i++)
			cin>>marks[i];
	int arr[26]={0};
	int sum=0;
	for(int j=0;j<m;j++){

		for(int i=0;i<n;i++)
		{
			arr[a[i][j]-65]++;

		}
		sum+=*max_element(arr,arr+26)*marks[j];

		memset(arr,0,sizeof(arr));
	}
	cout<<sum<<endl;


	return 0;
}