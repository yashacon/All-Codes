#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repe(i,a,b)  for(ll i=a;i<=b;i++)
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
 

void fun()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	ll ans=0;
	if(m<n||n==2)
	{
		cout<<-1;
		nl
		ll x;
		rep(i,0,n)
		    cin>>x;
		return;
	}
	rep(i,0,n){
		cin>>a[i];
		ans+=(2*a[i]);
	}
	//cout<<ans;
	ll k=min_element(a,a+n)-a;
	ll o=a[k];
	a[k]=100000;
	ll j=min_element(a,a+n)-a;
	ll p=a[j];
	ans+=(m-n)*(o+p);
	cout<<ans;
	nl
	rep(i,0,n-1)
	{
		cout<<i+1<<" "<<i+2;
		nl
	}
	cout<<1<<" "<<n;
	nl
	m-=n;
	while(m--)
		cout<<k+1<<" "<<j+1<<"\n";
	

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