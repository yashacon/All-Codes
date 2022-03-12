#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using ll=long long int;
using namespace std;



int main() {
	IOS
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll m;
		ll odd1=0,even1=0,odd2=0,even2=0;
		ll z;
		while(n--)
		{
			cin>>z;
			if(z&1)
				odd1++;
			else
				even1++;
		}
		cin>>m;
		while(m--)
		{
			cin>>z;
			if(z&1)
				odd2++;
			else
				even2++;

		}
		cout<<(odd1*odd2)+(even1*even2)<<"\n";
		
	}
	return 0;
}