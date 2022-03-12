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
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll xd=a-x;
    ll yd=b-y;
    if(xd+yd<n+1)
    {
        cout<<x*y;
    }
    else{
        if(xd<n+1&&yd<n+1){
            if(x<y){
                cout<<x*(b-n+xd);
            }
            else{
                cout<<y*(a-n+yd);
            }
        }
        else if(xd<n+1){
            if(x*(b-n+xd)<(b-n)*a)
                cout<<x*(b-n+xd);
            else
                cout<<(b-n)*a;
        }
        else if(yd<n+1){
            if(y*(a-n+yd)<(a-n)*b)
                cout<<y*(a-n+yd);
            else
                cout<<(a-n)*b;
        }
        else{
            if(a-n<b-n)
                cout<<(a-n)*b;
            else
                cout<<(b-n)*a;
        }
    }
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