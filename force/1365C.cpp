#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b)  for(ll i=a;i>=b;i--)
#define nl cout<<"\n";
#define MS(x, y) memset(x, y, sizeof(x))
 
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


template <typename A>
istream& operator>>(istream& input,vector<A>& x) {
  for(auto& i:x)
    input>>i;
  return input;
}
 
template<typename A>
ostream& operator<<(ostream& output,vector<A>& x) {
  for(auto& i:x)
    output<<i<<' ';
  return output;
}
 
 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
void write(ll a[],ll n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}
bool isvowel(char x){
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
		return 1;
	return 0;
}
void fun()
{
	ll n;
	cin>>n;
	mi a,b;
	rep(i,0,n){
		ll z;
		cin>>z;
		a[z]=i;
	}
	rep(i,0,n){
		ll z;
		cin>>z;
		b[z]=i;
	}
	ll p;
	mi mp;
	rep(i,1,n+1){
		p=(b[i]-a[i]+n)%n;
		mp[p]++;

	}
	ll m=0;
	for(auto x:mp)
		m=max(m,x.ss);
	cout<<m;
	nl
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
