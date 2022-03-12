#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b)  for(ll i=a;i>=0;i--)
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
void fun2(ll n){
	int y;
	int sum=0;
	for(int i=1;i<=2*n;i++){
		y=__gcd(n+(i*i),n+((i+1)*(i+1)));
		cout<<y<<" ";
		sum+=y;
	}
	nl
	cout<<sum;
}
void fun()
{
	ll n;
	cin>>n;
	ll i=2*n;
	ll p=__gcd(n+(i*i),n+((i+1)*(i+1)));
	map<int,int> mp;
    for (int i=2; i<=sqrt(p); i++)
    {
        if (p%i == 0)
        {
            if (p/i == i)
                mp[i]=0;
 
            else
                mp[i]=0,mp[p/i]=0;
        }
    }
    for(auto x:mp)
    	mp[x.ff]=i/x.ff;
    auto  it=mp.rbegin();
    while(it!=mp.rend()){
	    auto it2=mp.begin();
	    while(it2->first<it->first){
	    	if(it->first%it2->first==0)
	    		mp[it2->first]-=it->second;
	    	it2++;
	    }
	    it++;
	}
    ll ans=p;
    ll count=1;
    for(auto x:mp){
    	ans+=x.ff*x.ss;
    	count+=x.ss;
    }
    ans+=i-count;
    cout<<ans;
	nl  
	
}
int main()
{
	IOS
	ll t=1;
	#ifndef ONLINE_JUDGE
        if (fopen("input.txt", "r"))
        {
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
        }
    #endif
	cin>>t;
	while(t--)
		fun();
	return 0;
}