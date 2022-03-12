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
#define MOD 1000000007
ll dp[100001][101][2];
int fun2(int pos,string n,int &len,ll k,ll sum,bool f){
    
    if(pos==len){
        if(sum%k==0){
            //cout<<sum<<"z";
            return 1;
        }
        
        return 0;
    }
    if (dp[pos][sum%k][f] != -1)
        return dp[pos][sum%k][f]%MOD;
    
    
    int lim=10;
    if(!f)
        lim=1+n[pos]-'0';
    ll res=0;
    rep(i,0,lim){
        bool nf=f;
        if(!nf&&i<n[pos]-'0')
            nf=1;
        res+=fun2(pos+1,n,len,k,sum+i,nf);
    }
    return dp[pos][sum%k][f]=res;
}
void fun()
{
    ll k;
    string n;
    cin>>n>>k;
    ll sum=0,ans=0;
    bool f=0;
    int len=(int)n.size();
    memset(dp, -1, sizeof(dp));
    cout<<fun2(0,n,len,k,sum,f);
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