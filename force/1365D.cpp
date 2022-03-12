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
char a[51][51];
void dfs(ll i,ll j,ll n,ll m,ll &count)
{
    if(i<0||j<0||i>=n||j>=m||a[i][j]=='W'||a[i][j]=='#')
        return;
    if(a[i][j]=='G')
        count++;
    a[i][j]='W';
    dfs(i+1,j,n,m,count);
    dfs(i-1,j,n,m,count);
    dfs(i,j+1,n,m,count);
    dfs(i,j-1,n,m,count);

}
void fun()
{
    ll n,m;
    cin>>n>>m;
    ll gco=0;
    rep(i,0,n)
        rep(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='G')
                gco++;
        }
    
    if(gco){
        bool ans=0;
        ll count=0;
        rep(i,0,n)
            rep(j,0,m){
                if (a[i][j]=='B'){
                    if(i>0&&a[i-1][j]!='B')
                        a[i-1][j]='#';
                    if(j>0&&a[i][j-1]!='B')
                        a[i][j-1]='#';
                    if(i<n-1&&a[i+1][j]!='B')
                        a[i+1][j]='#';
                    if(j<m-1&&a[i][j+1]!='B')
                        a[i][j+1]='#';
                }
            }
        dfs(n-1,m-1,n,m,count);
        if(count<gco)
            ans=1;
        if(ans){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"Yes";
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