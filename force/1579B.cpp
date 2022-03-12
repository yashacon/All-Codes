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
   ll n;
   cin>>n;
   vi arr(n);
   rep(i,0,n)
      cin>>arr[i];
   vector<pair<ll,ll>> ans;
   rep(i,0,n){
      ll j=n;
      ll p=i+1;
      ll lst=arr[i];
      for(;p<n;p++){
         if(arr[p]<arr[i]&&arr[p]<lst){
            j=p;
            lst=arr[p];
         }
      }
      if(j==n)
         continue;
      ans.pb({i+1,j+1});
      ll k=arr[j];
      while(j>i){
         arr[j]=arr[j-1];
         j--;
      }
      arr[j]=k;
   }
   cout<<ans.size();
   nl
   for(auto x:ans){
      cout<<x.ff<<" "<<x.ss<<" "<<x.ss-x.ff<<"\n";
   }
   
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