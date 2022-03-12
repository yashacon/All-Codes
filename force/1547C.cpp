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
 
#define test4(x,y,z,a) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<"		a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"		y is "<<y<<endl;
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
   ll k,n,m;
   cin>>k>>n>>m;
   vector<ll> a(n),b(m);
   for(auto &x:a)
      cin>>x;
   for(auto &x:b)
      cin>>x;
   ll ia=0,ib=0;
   bool f=0;
   vector<ll> ans;
   while(ia<n&&ib<m){
      if(a[ia]==0)
      {
         ans.pb(a[ia++]);
         k++;
      }
      else if(b[ib]==0)
      {
         ans.pb(b[ib++]);
         k++;
      }
      else if(a[ia]<=k)
         ans.pb(a[ia++]);
      
      else if(b[ib]<=k)
         ans.pb(b[ib++]);
      else{
         f=1;

         break;
      }


   }
   if(f)
   {
      cout<<"-1\n";
      return;
   }
   while(ia<n)
      if(k>=a[ia]){
         if(a[ia]==0)
            k++;
         ans.pb(a[ia++]);
      }
      else
      {
         cout<<"-1\n";
         return;
      }
   while(ib<m)
      if(k>=b[ib]){
         if(b[ib]==0)
            k++;
         ans.pb(b[ib++]);
      }
      else
      {
         cout<<"-1\n";
         return;
      }
   for(auto x:ans)
      cout<<x<<" ";
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