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
   ll summ=0,suml=0;
   priority_queue<ll,vector<ll>,greater<ll>> pqme,pql;
   rep(i,0,n){
      ll x;
      cin>>x;
      pqme.push(x);
      summ+=x;
   }
   rep(i,0,n){
      ll y;
      cin>>y;
      pql.push(y);
      suml+=y;
   }
   ll r=n/4;
   ll v=n/4;
   stack<ll> s;
   while(r--){
      ll p=pqme.top();
      pqme.pop();
      summ-=p;
      ll q=pql.top();
      s.push(q);
      pql.pop();
      suml-=q;
   }
   if(summ>=suml){
      cout<<"0\n";
      return;
   }
   ll cnt=0;
   while(summ<suml){
      cnt++;
      summ+=100;
      pqme.push(100);
      if((n+cnt)/4>v){
         ll k=pqme.top();
         pqme.pop();
         summ-=k;
         v=(n+cnt)/4;
      }
      else if(!s.empty()){
            suml+=s.top();
            s.pop();

         }
      // cout<<summ<<"\n";
   }
   cout<<cnt;
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