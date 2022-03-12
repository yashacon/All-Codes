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
 
ll power(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a);
		b/=2;
		a=(a*a);
	}
	return ans;
}
void fun()
{
	ll n;
	
	cin>>n;
	ll k=n;
	bool a[10]={0};
	for(ll i=9;i>=0;i--)
	{
		ll p=power(3,i);
		if(n>=p){
			a[i]=1;
			n-=p;
		}
		
	}
	if(n==0){
		cout<<k;
		nl
		return;
	}
	
	for(ll j=0;j<10;j++)
	{
		if(!a[j])
		{
			a[j]=1;
			break;
		}
		else
			a[j]=0;
	}
	ll ans=0;
	for(ll i=0;i<10;i++)
		ans+=a[i]*power(3,i);
		cout<<ans;
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