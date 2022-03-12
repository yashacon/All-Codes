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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s1="abacaba";
    int c=0;
    rep(i,0,n-6){
        bool f=1;
        rep(j,0,7){
            if(s[i+j]!=s1[j]){
                f=0;
                break;
            }
        }
        if(f)
            if(++c>1){
                cout<<"No\n";
                return;
            }
    }
    string cpy=s;
    if(c==0){
        rep(i,0,n-6){
            s=cpy;
            bool f=1;
            rep(j,0,7){
                if(s[i+j]==s1[j]||s[i+j]=='?')
                    s[i+j]=s1[j];
                else{
                    f=0;
                    break;
                }
            }
            if(f){
                ll m=0;
                rep(i,0,n-6){
                    bool fg=1;
                    rep(j,0,7){
                        if(s[i+j]!=s1[j]){
                            fg=0;
                            break;
                        }
                    }
                    if(fg)
                        m++;
                }
                if(m==1){
                    rep(k,i,7+i)
                        cpy[k]=s1[k-i];
                    c=1;
                    break;
                }
            }
        }
    }
    if(c){
        cout<<"Yes\n";
        for(auto x:cpy){
            if(x=='?')
                cout<<"z";
            else
                cout<<x;
        }
    }
    else
        cout<<"No";
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