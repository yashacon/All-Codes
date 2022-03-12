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
string s;
void fun2(ll l,ll r,ll &count,char t)
{
    if(l==r)
    {
        if(s[l]!=t)
            count++;
        return;
    }
    ll n=r,st=l;
    ll c=0,c1=0;
    while(l<r){
        if(s[l]!=t)
            c++;
        if(s[r]!=t)
            c1++;
        l++;r--;
    }
        ll co1=0,co2=0;
        fun2(l,n,co1,(char)(t+1));
        fun2(st,r,co2,(char)(t+1));
        //cout<<co1<<" "<<co2;
        count+=min(c+co1,c1+co2);
    
}
void fun()
{
    ll n;
    cin>>n;
    cin>>s;
    ll count=0;
    fun2(0,n-1,count,'a');
    cout<<count;
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