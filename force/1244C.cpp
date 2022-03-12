#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,p,d,w;
	cin>>n>>p>>w>>d;
	ll maxwin=p/w;
	bool flag=0;
	for(ll i=0;i<w+1;i++){
		ll draw = (p - maxwin*w)/d;
		if(maxwin>=0 && draw>=0 && (draw+maxwin)<=n && (((draw*d)+(maxwin*w))==p)){
			cout<<maxwin<<" "<<draw<<" "<<n-maxwin-draw<<"\n";
			flag=1;
			break;
		}
		maxwin--;
	}
	
	if(!flag)
		cout<<"-1\n";
	
}
