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
ll X,Y;
string s;
vector<vector<ll>> dp;
ll dfs(ll ind,ll end){
    if(end<=ind||ind<0||end>=s.size())
        return 0;

    if(dp[ind][end]!=-1)
        return dp[ind][end];
    dp[ind][end]=0;
    for(int i=ind;i<end;i++)
    {
        // if(i<end-1&&(s[i]=='p'&&s[i+1]=='r'&&s[i+2]=='p'))
        // {
        //     dp[ind][end]+=max(dfs(ind,i-1)+dfs(i+2,end)+X,dfs(i+1,end));
        // }
        // else if(i<end-1&&(s[i]=='r'&&s[i+1]=='p'&&s[i+2]=='r'))
        // {
        //     dp[ind][end]+=max(dfs(ind,i-1)+dfs(i+2,end)+Y,dfs(i+1,end));
        // }
        // else 
        if (i<end)
        {
            if(s[i]=='r'&&s[i+1]=='p')
                dp[ind][end]+=max(Y+dfs(ind,i-1)+dfs(i+2,end),dfs(ind,i)+dfs(i+1,end));
            else if(s[i]=='p'&&s[i+1]=='r')
                dp[ind][end]+=max(X+dfs(ind,i-1)+dfs(i+2,end),dfs(ind,i)+dfs(i+1,end));

        }
    }
    return dp[ind][end];
}
void fun()
{
    cin>>s;
    cin>>X>>Y;
    dp.resize(s.size(),vector<ll>(s.size(),-1));
    cout<<dfs(0,s.size()-1);

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