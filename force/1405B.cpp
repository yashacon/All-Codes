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
    ll a[n];
    rep(i,0,n)
        cin>>a[n-i-1];
    ll neg=0;
    vi v;
    rep(i,0,n){
        ll now=0;
        if(a[i]<0){
            now+=a[i];
            while(i<n-1&&a[i+1]<0)
                now+=a[++i];
        }
        else{
            now+=a[i];
            while(i<n-1&&a[i+1]>0)
                now+=a[++i];
            
        }
        v.pb(now);
    }
    // for(auto x:v)
    //     cout<<x<<" ";
    // nl
    rep(i,1,v.size())
    {
        if(v[i-1]<0)
            neg+=v[i-1];
        if(neg<0&&v[i]>0&&v[i]<abs(neg)){
            neg=v[i]-abs(neg); 
        }
        else if(neg<0&&v[i]>0&&v[i]>=abs(neg))
            neg=0;
        else if(v[i]<0&&i==v.size()-1)
            neg+=v[i];      
    }
    cout<<abs(neg);
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