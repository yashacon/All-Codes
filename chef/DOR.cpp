#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define nl cout<<"\n";

 
#define pii pair<ll,ll>
#define vi  vector<ll>
#define vii vector<pii>
#define mi  map<ll,ll>
#define all(a)  (a).begin(),(a).end()
 
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
 
#define test4(x,y,z,a) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<"		a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"		y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
#define N 300009
 
ll power(ll a,ll b,ll m)
{
	ll ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return ans;
}
ll size(ll r)
{
	return (ll) log2(r)+1;
}
ll fun(ll L,ll R)
{
	ll size1=size(R);
	bool lb[size1],rb[size1];
	ll i=size1-1,j=size1-1;
	while(L)
	{
		lb[i--]=L%2;
		L/=2;
		//cout<<lb[i-1];
		
	}
	while(R)
	{
		rb[j--]=R%2;
		R/=2;
		//cout<<rb[j-1];
	}
	ll index=0;
	rep(i,0,size1)
	{
		if(lb[i]==rb[i])
			index++;
		else
			break;
	}
	rep(i,index,size1)
		rb[i]=1;
	ll ans=0;
	ll q=1;
	for(ll j=size1-1;j>=0;j--)
	{
		ans+=q*rb[j];
		q*=2;
	}
	return ans;

}
int main()
{
	IOS
	ll t=1;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		cout<<fun(l,r);
		nl
	}
	return 0;
}