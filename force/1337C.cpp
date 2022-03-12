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
 
long long powermodm(long long x,long long n,long long M){long long result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
long long power(long long _a,long long _b){long long _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
long long gcd(long long a,long long b){if(a==0)return b;return gcd(b%a,a);}
long long lcm(long long a,long long b){return (max(a,b)/gcd(a,b))*min(a,b);}
void write(long long a[],long long n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}

vector<vector<ll> > v;
vector<ll> visited,child,height,par;
map<ll,ll> industry;
 
void dfs(int x){
    for(int i=0;i<v[x].size();i++){
        if(visited[v[x][i]]==0){
            height[v[x][i]]=height[x]+1;
            visited[v[x][i]]=1;
            par[v[x][i]]=x;
            dfs(v[x][i]);
        }
    }
    child[par[x]]+=child[x]+1;
}
 
void dfs1(int x){
     for(int i=0;i<v[x].size();i++){
        if(visited[v[x][i]]==0){
            if(industry[x]==1){
                height[v[x][i]]=height[x];
            }
            else {
                height[v[x][i]]=height[x]+1;
            }
            visited[v[x][i]]=1;
            dfs1(v[x][i]);
        }
    }
}

void fun()
{
	ll n,k;
	cin>>n>>k;
	v.resize(n+1);
	rep(i,0,n-1){
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);

	}
	child.resize(n+1);
    visited.resize(n+1);
    height.resize(n+1);
    par.resize(n+1);
    fill(visited.begin(),visited.end(),0);
    height[1]=1;
    visited[1]=1;
    par[1]=0;

    dfs(1);

    vii p;
    rep(i,i,n+1){
        p.pb({height[i]-child[i],i});
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    industry.clear();
    rep(i,0,k){
    	industry[p[i].second]=1;
    }
    fill(visited.begin(),visited.end(),0);
    visited[1]=1;
    height[1]=0;
    dfs1(1);
    ll ans=0;
    rep(i,0,k){
        ans+=height[p[i].second];
    }
    cout<<ans;
    nl;
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