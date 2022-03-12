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
	ll n;
	cin>>n;
	if(n==1)
	{
		cout<<"Yes";
		nl
		return;
	}
	ll k=n;
	ll count=0;
	while(k)
	{
		if(k%10!=0)
			break;
		else{
			count++;
			k/=10;
		}
	}
	bool flag=0;
	while(k>1)
	{
		if(k%2!=0){
			flag=1;
			break;
		}
		k/=2;
		count--;

	}
	if(flag==0 && count>=0)
		cout<<"Yes";
	else 
		cout<<"No";
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