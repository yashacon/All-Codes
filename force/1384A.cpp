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
    ll z;
    cin>>z;
    string s;
    rep(i,0,z)
        s+='a';
    if(z==0)
        s+='a';
    cout<<s;
    nl
    rep(i,0,n){
        ll p;
        string s2;
        if(i!=n-1)
            cin>>p;
        else
            p=z;
        if(p==z&&z==0){
            s2=(s[0]+1-'b')%25+'b';
        }
        else if(p>z){
            rep(j,0,z)
                s2+=s[j];
            rep(j,z,p)
            {
                if(j<s.size()){
                    s2+=(s[j]+1-'a')%26+'a';
                }
                else
                    s2+=(s[(s.size())>0?s.size()-1:0]+1-'a')%26+'a';
            }
        }
        else{
            rep(j,0,z)
                s2+=s[j];
        }
        cout<<s2;
        nl
        s=s2;
        z=p;
    }
    

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