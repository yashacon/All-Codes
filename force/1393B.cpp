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
    map<ll,ll> mp;
    rep(i,0,n)
    {
        ll z;
        cin>>z;
        mp[z]++;

    }
    map<int,ll> m;
    vector<ll> p;
    for(auto x:mp){
        if(x.ss>=8)
            m[8]++;
        else if(x.ss>=4){
            m[4]++;
            p.pb(x.ff);
        }
        else if(x.ss>=2)
            m[2]++;

    }
    ll q;
    cin>>q;
    while(q--){
        char c;
        ll ig;
        cin>>c>>ig;
        if(c=='+'){
            if(mp[ig]==7){
                m[4]--;
                auto it=find(p.begin(),p.end(),ig);
                p.erase(it);
                m[8]++;
            }
            else if(mp[ig]==3){
                m[2]--;
                m[4]++;
                p.pb(ig);
            }
            else if(mp[ig]==1){
                m[2]++;
            }
            mp[ig]++;
        }
        else{
            if(mp[ig]==8){
                m[8]--;
                m[4]++;
                p.pb(ig);
            }
            else if(mp[ig]==4){
                m[4]--;
                auto it=find(p.begin(),p.end(),ig);
                p.erase(it);
                m[2]++;
            }
            else if(mp[ig]==2){
                m[2]--;
            }
            mp[ig]--;
        }
        if(m[8]>0||m[4]>1)
            cout<<"YES";
        else if(m[4]==1){
            ll y=mp[p[0]]-4;
            if(y<=1){
                if(m[2]>1)
                    cout<<"YES";
                else
                    cout<<"NO";
            }
            else{
                if(m[2]>0)
                    cout<<"YES";
                else
                    cout<<"NO";
            }
        }
        else
            cout<<"NO";
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
    //cin>>t;
    while(t--)
        fun();
    return 0;
}