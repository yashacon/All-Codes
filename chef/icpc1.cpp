#include<bits/stdc++.h>

using ll=long long int;
using namespace std;
ll fun(string s)
{
    stringstream geek(s);
    ll x=0;
    geek>>x;
    return x;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll h=n;
		ll as=h;
		ll l=0;
		while(n){
			l++;
			n=n/10;
		}
		ll a[l];
		for(ll j=l-1;j>=0;j--){
			a[j]=h%10;
			h=h/10;
		}
		
		string m="999999999999999999999";
		for(ll j=0;j<l;j++){
		    string h;
    		for(ll i=0;i<l;i++)
    		{
    		        if(i!=j)
    			 h+=a[i]+48;
    		}
    		
    		if(m>h)
    		m=h;
	    }
		cout<<fun(m)<<"\n";

	}
}