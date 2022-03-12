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
bool check(int sh,int sm){
    int a[4];
    a[0]=sh%10;
    sh/=10;
    a[1]=sh%10;
    a[2]=sm%10;
    sm/=10;
    a[3]=sm%10;
    sort(a,a+4);
    return a[3]==a[2]+a[1]+a[0];
}
ll fun2(int sh,int sm,int eh,int em){
    ll ans=0;
    while(sh<eh||sm<em){
        ans+=check(sh,sm);
        if(++sm==60){
            sh++;
            sm=0;
        }
    }
    ans+=check(sh,sm);
    return ans;
}
void fun()
{
    int sh,sm,eh,em;
    cin>>sh>>sm>>eh>>em;
    if(sh<eh||(sh==eh&&em>=sm))
        cout<<fun2(sh,sm,eh,em);
    else
        cout<<fun2(0,0,eh,em)+fun2(sh,sm,23,59);
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