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
void fun()
{
	ll n,m,q;
	cin>>n>>m>>q;
	ll r[n]={0},c[m]={0};
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		r[x-1]++;
		c[y-1]++;
	}
	ll ans=0;
	ll odd1=0,even1=0;
	rep(i,0,n)
	{
		if(r[i]&1)
			odd1++;
		else
			even1++;
	}
	ll odd2=0,even2=0;
	rep(i,0,m)
	{
		if(c[i]&1)
			odd2++;
		else
			even2++;
	}
	cout<<odd1*even2+odd2*even1;
	nl
	return ;

}
int main()
{
	IOS
	ll t=1;
	cin>>t;
	while(t--)
		fun();
	return 0;
}