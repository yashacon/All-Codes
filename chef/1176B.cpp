#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long x;
		
		long long a[3]={0};
		for(int i=0;i<n;i++){
			cin>>x;
			a[x%3]++;
		}
		long long sum=a[0];
		sum+=min(a[1],a[2]);
		if(a[1]>a[2])
		{
			a[1]-=a[2];
			sum+=a[1]/3;
		}
		else{
			a[2]-=a[1];
			sum+=a[2]/3;
		}
		cout<<sum<<"\n";

	}

}