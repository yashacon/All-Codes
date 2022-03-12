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
	ll n,k;
	cin>>n>>k;
	ll h=(n+1)/2;
	ll x;
	ll z[k+1]={0};
	rep(i,0,n){
		cin>>x;
		z[x]++;
	}
	sort(z+1,z+k+1);
	ll j=k;
	ll ans=0;
	rep(j,1,k+1){
			ans+=(z[j]/2)*2;
			h-=z[j]/2;

	}
	cout<<ans+h<<"\n";
	return;
}

int main()
{
	IOS
	ll t=1;
	//cin>>t;
	while(t--)
		fun();
	return 0;
}