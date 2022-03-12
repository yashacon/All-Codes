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

void fun()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> I,M;
    vector<int> block(n),cond(n);
    int last=-1,count=0;
    rep(i,0,s.size()){
        if(s[i]=='I')
            I.pb(i);
        else if(s[i]=='M')
            M.pb(i);
        else if(s[i]=='X')
            last=i;
        else if(s[i]==':')
            count++;
        cond[i]=count;
        block[i]=last;

    }   
    int ans=0;
    int i=0;
    for(auto x:M){
        bool f=0;
        while(i<I.size() && I[i]<x){
            if(k+1-abs(I[i]-x)-( cond[x]-cond[I[i]] ) >0 && block[x]<I[i]){
                ans++;
                i++;
                f=1;
                break;
            }
            i++;
        }
        if(!f && i<I.size()){
            if(k+1-abs(I[i]-x)-( cond[I[i]]-cond[x] ) >0 && block[I[i]]<x){
                ans++;
                i++;
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