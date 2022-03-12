#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int occ=n/m;
		int d=m%10;
		long long int sum=0,store=0;
		for(int i=1;i<10;i++){
			sum+=(d*i)%10;
			if(i==(occ%10))
				store=sum;
		}
		long long int divi=occ/10;
		cout<<(divi*sum)+store<<"\n";
	}
	return 0;
}
