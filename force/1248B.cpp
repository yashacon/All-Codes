#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using ll=long long int;
using namespace std;
 
 
 
int main() {
	IOS
	ll n;
	cin>>n;
	ll a[n];
	ll sum=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	ll p=0,b=0;
	for(ll i=0;i<n/2;i++)
		p+=a[i];
	b=sum-p;
	cout<<(p*p)+(b*b)<<"\n";
	return 0;
}