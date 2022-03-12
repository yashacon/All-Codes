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
   vector<ll> a(n+1);
   rep(i,0,n)
      cin>>a[i+1];
   vector<bool> vis(n+1,0);
   ll cnt=0;
   vector<ll> res(n+1,0);
   rep(i,1,n+1)
      if(!vis[a[i]]){
         vis[a[i]]=i;
         res[i]=a[i];
         cnt++;
      }
   deque<ll> q;
   for(int i=1;i<n+1;i++){
      if(vis[i]==0)
         q.push_back(i);
      
   }
   queue<ll> qr;
   rep(i,1,n+1)
      if(res[i]==0)
         qr.push(i);
   while(!qr.empty()){
      int i=qr.front();
      qr.pop();
      if(res[i]==0){
         if(!q.empty()&&q.front()!=i){
            res[i]=q.front();
            vis[q.front()]=i;
            q.pop_front();
         }
         else if(q.size()>1){
            ll p=q.front();
            q.pop_front();
            res[i]=q.front();
            vis[q.front()]=i;
            q.pop_front();
            q.push_back(p);
         }
         else{
            ll p=vis[a[i]];
            res[p]=0;
            res[i]=a[i];
            vis[a[i]]=i;
            qr.push(p);
         }
      }
   }
   cout<<cnt<<"\n";
   rep(i,1,n+1)
      cout<<res[i]<<" ";
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