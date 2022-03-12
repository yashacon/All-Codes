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
const int N=2e6+5;
ll arr[N];
void fun()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> v(k);
    for(auto &x:v)
        cin>>x.ff>>x.ss;
    sort(v.begin(),v.end(),greater<pair<ll,ll>>());
    
    arr[0]=v[0].ff;
    rep(i,1,k)
        arr[i]=arr[i-1]+v[i].ff;
    ll ans=0;
    rep(i,0,k){
        //cout<<v[i].ff<<" "<<v[i].ss<<"\n";
        ll l=0,r=k-1,ind=-1;
        while(l<=r){
            ll mid=(l+r)/2;
            if(v[mid].ff>=v[i].ss)
            {
                l=mid+1;
                ind=mid;
            }
            else
                r=mid-1;

        }
        if(ind>=n-1)
            ans=max(ans,arr[n-1]);
        else{
            if(ind>=i)
                ans=max(ans,arr[ind]+v[i].ss*(n-1-ind));
            else
                ans=max(ans,arr[ind]+v[i].ff+v[i].ss*(n-1-ind-1));
        }
    }
    cout<<ans;
    nl
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