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

void fun()
{
    ll n;
    cin>>n;
    vi v(n,-1);
    ll j=0,i=1;
    while(i<n){
        cout<<"? "<<i+1<<" "<<j+1;
        nl
        cout.flush();
        ll x,y;
        cin>>x;
        cout<<"? "<<j+1<<" "<<i+1;
        nl
        cout.flush();
        cin>>y;
        if(x<y){
            v[j]=y;
            j=i++;            
        }
        else{
            v[i++]=x;
        }
    }
    ll u=(n*(n+1))/2;
    ll pos;
    rep(i,0,n)
        if(v[i]!=-1)
            u-=v[i];
        else pos=i;
    if(u!=0)
        v[pos]=u;
    cout<<"! ";
    for(auto x:v){
        cout<<x<<" ";
    }

    nl
    cout.flush();
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