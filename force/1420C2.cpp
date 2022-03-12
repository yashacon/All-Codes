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
#define N 300009

void insert(vi &a,ll i,ll &ans)
{
    if (i==0||i==a.size()-1) return;
    if (a[i-1]<a[i]&&a[i]>a[i+1]) ans+=a[i];
    if (a[i-1]>a[i]&&a[i]<a[i+1]) ans-=a[i];
}

void erase(vi &a,ll i,ll &ans)
{
    if (i==0||i==a.size()-1) return;
    if (a[i-1]<a[i]&&a[i]>a[i+1]) ans-=a[i];
    if (a[i-1]>a[i]&&a[i]<a[i+1]) ans+=a[i];
}
void fun()
{
    ll n,q;
    cin>>n>>q;
    vi a(n+2);
    rep(i,1,n+1)
        cin>>a[i];
    a[0]=-1;
    a[n+1]=-1;
    ll ans=0;
    rep(i,1,n+1)
    {
        insert(a,i,ans);
    }
    cout<<ans;
    nl
    while (q--)
    {
        ll l,r;
        cin>>l>>r;
        erase(a,l-1,ans);
        erase(a,l,ans);
        erase(a,l+1,ans);
        if (l!=r)
        {
            if (r-1!=l+1&&r-1!=l) erase(a,r-1,ans);
            if (r!=l+1) erase(a,r,ans);
            erase(a,r+1,ans);
        }
        swap(a[l],a[r]);
        insert(a,l-1,ans);
        insert(a,l,ans);
        insert(a,l+1,ans);
        if (l!=r)
        {
            if (r-1!=l+1&&r-1!=l) insert(a,r-1,ans);
            if (r!=l+1) insert(a,r,ans);
            insert(a,r+1,ans);
        }
        cout<<ans;
        nl
    }
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