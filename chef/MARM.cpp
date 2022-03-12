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
	ll n,k;
	cin>>n>>k;
	ll a[n];
	rep(i,0,n)
		cin>>a[i];
	ll times=k/n;
	if((times/3)>0)
		{
			times%=3;
			if(n&1)
			{
				a[n/2]=0;
			}
		}
	if(times==2)
	{
		if(n&1)
		{
			a[n/2]=0;
		}
			rep(i,0,n/2)
			{
				int h=a[n-i-1];
				a[n-1-i]^=a[i];
				a[i]=h;
			}
			times=0;

	}
	else if(times==1)
	{
		if(n&1)
		{
			a[n/2]=0;
		}
		
			rep(i,0,n/2)
			{
				int h=a[i];
				a[i]^=a[n-i-1];
				a[n-i-1]=h;
			}
			times=0;
	}
	ll till=k%n;
			rep(i,0,till)
			{
				a[i]^=a[n-i-1];
			}
	rep(i,0,n)
		cout<<a[i]<<" ";
	nl
	return;



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
