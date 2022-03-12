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
   ll w,h;
   cin>>w>>h;
   ll x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   ll w1,h1;
   cin>>w1>>h1;
   if(h-y2>=h1||y1>=h1){
      cout<<setprecision(9)<<0;
      nl
      return;
   }
   if(x1>=w1||w-x2>=w1){
      cout<<setprecision(9)<<0;
      nl
      return;
   }
   long double ans=DBL_MAX;
   if(w1<=w-x2+x1){
      if(h1<=y1+h-y2){
         long double r=max(x1,w-x2);
         if(ans-(w1-r)>1e-7){
            ans=w1-r;
         }
         long double r2=max(y1,h-y2);
         if(ans-(h1-r2)>1e-7){
            ans=h1-r2;
         }
         if(ans-hypot(1.0*(w1-r),1.0*(h1-r2))>1e-7)
            ans=hypot(1.0*(w1-r),1.0*(h1-r2));
      }
      else{
         long double r=max(x1,w-x2);
         if(ans-(w1-r)>1e-7){
            ans=w1-r;
         }
      }

   }
   else{
      if(h1<=y1+h-y2){
         long double r2=max(y1,h-y2);
         if(ans-(h1-r2)>1e-7)
            ans=h1-r2;
      }
      else{
         ans=-1;
      }
   }
   cout<<setprecision(9)<<ans;
   nl
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