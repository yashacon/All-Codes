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
 
#define test4(x,y,z,a) cout<<"x is "<<x<<"      y is "<<y<<"        z is "<<z<<"        a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"        y is "<<y<<"        z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"      y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;

 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}

void dfs(ll n,vector<vector<ll>>&g,ll par,vector<ll>& val,vector<ll> &child){
    for(auto x:g[n]){
        if(x==par)
            continue;
        dfs(x,g,n,val,child);
        child[n]+=child[x];
        child[n]++;
    }
    if(par!=0)
        val.pb((g.size()-child[n]-2)*(child[n]+1));
}
void fun()
{
    ll n;
    cin>>n;
    vector<vector<ll>> g(n+1,vector<ll>());
    vector<ll> child(n+1,0);
    map<pair<ll,ll>,ll> m;
    rep(i,1,n){
        ll x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    ll k;
    cin>>k;
    vector<ll> fact(k);
    for(auto &x:fact)
        cin>>x;
    while(fact.size()<n-1) 
        fact.pb(1);
    sort(all(fact));
    vector<ll> val;
    dfs(1,g,0,val,child);
    ll sol=0;
    sort(all(val));
    rep(i,n-1,fact.size()){
        val[n-2]=(val[n-2]*fact[i])%MOD;
    }
    ll ed=0;
    for(auto x:val){
        sol=(sol+(fact[ed++]*(x))%MOD)%MOD;
    }
    cout<<sol;
    nl
    return;
}
int main()
{
    IOS
    #ifndef ONLINE_JUDGE
        if (fopen("input.txt", "r"))
        {
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        }
    #endif
   
    ll t=1;
    cin>>t;
    while(t--)
        fun();
    return 0;
}