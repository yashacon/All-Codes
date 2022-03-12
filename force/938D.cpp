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
#define vii vector<vi>
#define vpi vector<pii>
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
#define N 300009

void fun()
{
    ll n,k;
    cin>>n>>k;
    vector<vector<pii>> graph(n+1);
    rep(i,0,k){
        ll x,y,z;
        cin>>x>>y>>z;
        graph[x].pb({z,y});
        graph[y].pb({z,x});
    }
    vi cost(n+1);
    priority_queue<pii,vpi,greater<pii>> q;
    rep(i,0,n){
        ll x;
        cin>>x;
        cost[i+1]=x;
        q.push({x,i+1});
    }
    while(!q.empty()){
        pii now=q.top();
        q.pop();
        if(now.ff!=cost[now.ss])
            continue;
        for(auto x:graph[now.ss]){
            if(cost[x.ss]>cost[now.ss]+2*x.ff){
                cost[x.ss]=cost[now.ss]+2*x.ff;
                q.push({cost[x.ss],x.ss});
            }
        }
    }
    rep(i,1,n+1)
        cout<<cost[i]<<" ";
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
    //cin>>t;
    while(t--)
        fun();
    return 0;
}