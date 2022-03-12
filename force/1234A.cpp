#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a=0,x;
		for(int i=0;i<n;i++){
			cin>>x;
			a+=x;
		}
		cout<<(a+n-1)/n<<"\n";
	}
}