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
#define all(a)  a.begin(),a.end()
 
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
 
#define test4(x,y,z,a) cout<<"x is "<<x<<"      y is "<<y<<"      z is "<<z<<"      a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"     y is "<<y<<"      z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"    y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
#define N 300009


 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
void write(ll a[],ll n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}

void fun()
{
   ll n,m;
   cin>>n>>m;
   ll k;
   cin>>k;
   vector<string> mat(n);
   for(auto &x:mat)
      cin>>x;
   vector<string> cpy(n,string(m,'.'));
   rep(i,0,n){
      rep(j,0,m){
         if(mat[i][j]=='.')
            continue;
         int d=0;
         while(1){
            if(i-d-1>=0&&j-d-1>=0&&j+d+1<m&& mat[i-d-1][j-d-1]=='*'&& mat[i-d-1][j+d+1]=='*')
               d++;
            else
               break;

         }
         if(d>=k){
            rep(p,0,d+1)
               cpy[i-p][j-p]=cpy[i-p][j+p]='*';
         }
      }
   }
   if(cpy==mat)
      cout<<"YES\n";
   else
      cout<<"NO\n";
   return;
}
int main()
{
   IOS
   ll t=1;
   #ifndef ONLINE_JUDGE
        if (fopen("input.txt", "r"))
        {
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
        }
   #endif
   cin>>t;
   while(t--)
      fun();
   return 0;
}