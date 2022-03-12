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
bool isvowel(char x){
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
		return 1;
	return 0;
}
ll cost[N+1];
bool tobe[N+1][2];
bool vis[N]={0};
vector<vi> tree(N);
pair<ll,pii> dfs(ll curr,ll costtill){
	pair<ll,pii> ans={0,{0,0}};
	if(vis[curr])
		return ans;
	vis[curr]=1;
	if(tobe[curr][0]!=tobe[curr][1])
	{
		if(tobe[curr][1])
			ans.ss.ss++;
		else
			ans.ss.ff++;
	}
	bool f=0;
	if(costtill<cost[curr])
		f=1;
	costtill=min(costtill,cost[curr]);
	for(auto x:tree[curr]){
		pair<ll,pii> down=dfs(x,costtill);
		ans.ff+=down.ff;
		ans.ss.ff+=down.ss.ff;
		ans.ss.ss+=down.ss.ss;
	}
	if(f)
		return ans;
	ll selevnnod=min(ans.ss.ff,ans.ss.ss);
	ans.ff+=selevnnod*2*costtill;
	return {ans.ff,{ans.ss.ff-selevnnod,ans.ss.ss-selevnnod}};
}
void fun()
{
	ll n;
	cin>>n;
	ll u,v;
	rep(i,0,n){
		cin>>cost[i+1];
		cin>>tobe[i+1][0]>>tobe[i+1][1];
	}
	rep(i,0,n-1){
		ll x,y;
		cin>>x>>y;
		tree[x].pb(y);
		tree[y].pb(x);
	}
	pair<ll,pii>ans=dfs(1,cost[1]);
	if(ans.ss.ff>0||ans.ss.ss>0)
		cout<<"-1\n";
	else
		cout<<ans.ff;
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