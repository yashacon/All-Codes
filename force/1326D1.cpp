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
void fun()
{
    string s;
    cin>>s;
    ll n=s.size();
    string tmp;
    ll maxx=0;
    string ans;
    rep(i,0,n){
        tmp+=s[i];
        string cpy=tmp;
        reverse(cpy.begin(),cpy.end());
        if(cpy==tmp&&cpy.size()>maxx)
        {
            maxx=cpy.size();
            ans=tmp;
        }
    }
    if(maxx==n)
    {
        cout<<ans;
        nl
        return;
    }
        string k;
        repr(j,n-1,0){
            k+=s[j];
            string cpy2=k;
            reverse(cpy2.begin(),cpy2.end());
            if(cpy2==k&&cpy2.size()>maxx)
            {
                maxx=cpy2.size();
                ans=cpy2;
            }
        }
    if(maxx==n)
    {
        cout<<ans;
        nl
        return;
    }
    k.clear();
    tmp.clear();
    rep(i,0,n){
        tmp+=s[i];
        string k;
        repr(j,n-1,i+1){
            k+=s[j];
            string cpy=k;
            reverse(cpy.begin(),cpy.end());
            string l=tmp+cpy;
            reverse(l.begin(),l.end());
            if(tmp+cpy==l&&l.size()>maxx)
            {
                maxx=l.size();
                ans=tmp+cpy;
            }
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