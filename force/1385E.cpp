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
#define N 300009
 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}

void fun()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll> ());
    vector<ll>  vis(n,0);
    vii v2;
    rep(i,0,m)
    {
        ll x,y,k;
        cin>>k>>x>>y;
        if(k)
            v[x-1].pb(y-1);
        v2.pb({x-1,y-1});
    }
    rep(i,0,n)
        for(auto x:v[i])
            vis[x]++;
    queue<ll> q; 
    rep(i,0,n)
        if (vis[i] == 0) 
            q.push(i); 
    map<ll,ll> ans;
    ll i=0;
    while (!q.empty()) { 
        ll u = q.front(); 
        q.pop(); 
        ans[u]=i++;
        for (auto itr : v[u])
            if (--vis[itr] == 0) 
                q.push(itr); 
    } 
    if(i!=n)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(auto x:v2){
        //cout<<ans[x.ff]<<" "<<ans[x.ss]<<"\n";
        if(ans[x.ff]>ans[x.ss])
            swap(x.ff,x.ss);
        cout<<x.ff+1<<" "<<x.ss+1;
        nl

    }
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