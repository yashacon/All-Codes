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
    ll n,d,m;
    cin>>n>>d>>m;
    vi gt,sm;
    rep(i,0,n){
        ll z;
        cin>>z;
        if(z>m)
            gt.pb(z);
        else
            sm.pb(z);
    }
    sort(all(sm));
    sort(all(gt),greater<ll>());
    // rep(i,0,n)
    //     cout<<a[i]<<" ";
    // nl
    ll summ=0;
    ll p;
    if(d<sm.size())
        p=d;
    else
        p=sm.size();
    rep(i,0,p)
        summ+=sm[i];
    ll sl=0,sg=0,ans=0;
    while(sg<gt.size()&&sl<sm.size()){
        if(gt[sg]<=summ){
            break;
        }
        else{
            ans+=gt[sg++];
            if(sg==gt.size()){
                ans+=summ;
                sl+=d;
                break;
            }
        }
        summ=0;
        sl+=d;
        if(sl+d<sm.size())
            p=sl+d;
        else
            p=sm.size();
        rep(i,sl,p)
            summ+=sm[i];
    }
    while(sl<sm.size())
        ans+=sm[sl++];
    ll lim=gt.size();
    while(sg<lim){
        ans+=gt[sg++];
        lim-=d;
    }
    cout<<ans;
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