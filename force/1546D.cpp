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
#define all(a)  a.begin(),a.end()
 
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
 
#define test4(x,y,z,a) cout<<"x is "<<x<<"      y is "<<y<<"      z is "<<z<<"      a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"     y is "<<y<<"      z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"    y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;


 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
void write(ll a[],ll n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}
ll mod=998244353,N=1e5+10;
vector<ll> n_inverse(N), fact_inverse(N), fact(N);
void calc() {
    fact[0] = fact[1] = 1;
    n_inverse[0] = n_inverse[1] = 1;
    fact_inverse[0] = fact_inverse[1] = 1;
 
    rep(i,2,N) {
        fact[i] = (fact[i - 1] * i) % mod;
        n_inverse[i] = n_inverse[mod % i] * (mod - mod / i) % mod;
        fact_inverse[i] = (n_inverse[i] * fact_inverse[i - 1]) % mod;
    }
}
 
ll ncr(ll n, ll r) {
    if (n < r) { return 0; }
    return ((fact[n] * fact_inverse[r]) % mod * fact_inverse[n - r]) % mod;
}

void fun()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll one=0,zero=0,cnt=0;
   for(auto x:s){
      if(x=='1')
         cnt++;
      else{
         one+=cnt/2;
         cnt=0;
         zero++;
      }
   }
   one+=cnt/2;
   cout<<ncr(one+zero,one);
   nl
   return;
}
int main()
{
   IOS
   calc();
   ll t=1;
   #ifndef ONLINE_JUDGE
        if (fopen("input.txt", "r"))
        {
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
        }
    #endif
   cin>>t;
   while(t--)
      fun();
   return 0;
}