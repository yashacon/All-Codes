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
#define mod 1000000007
 
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
ll add(ll a, ll b){
    a += b;
    if(a >= mod)a -= mod;
    return a;
}

ll mul(ll a, ll b){
    a *= b;
    if(a >= mod)a %= mod;
    return a;
}

void dfs(ll u,ll par, vector<ll> &dp,vector<vector<ll>> &tree,ll &res){
    ll sum = 0;
    for(auto v : tree[u]){
    	if(par==v)
    		continue;
        dfs(v,u,dp,tree,res);
        res = add(res, add(mul(sum, mul(dp[v], 2)), dp[v]));
        sum = add(sum, dp[v]);
    }
    dp[u] = add(mul(2, sum), 1);
}

void fun()
{
	ll n;
	cin>>n;
	vector<vector<ll>> tree(n+1,vector<ll>());
	vector<ll> dp(n+1,0);
	rep(i,1,n){
		ll x,y;
		cin>>x>>y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}
	ll res=n;
	dfs(1,0,dp,tree,res);
	cout<<res;
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