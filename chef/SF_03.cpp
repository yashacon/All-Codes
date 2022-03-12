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

void fun()
{
    ll n;
    cin>>n;

    ll a[n];
    rep(i,0,n)
        cin>>a[i];
    ll arr[n]={0};
    if(n==1)
    {
        cout<<"1\n";
        return;
    }
    rep(i,0,n){
        if(i==0){
            if(i+1<n&&a[i+1]>=a[i])
                arr[i]=1;
            continue;
        }
        if(i==n-1)
        {
            if(i-1>-1&&a[i-1]>=a[i])
                arr[i]=1;
            continue;
        }
        if(a[i]<=a[i-1]&&a[i]<=a[i+1])
            arr[i]=1;
    }
    ll ans=0,count=1;
    ll k=0;
    while(k<n&&arr[k]!=1)
        k++;
    ans+=((k+1)*(k+2))/2-1;
    rep(i,k,n){
        if(arr[i]==1){
            count=1;
        }

        ans+=count;
        count++;
    }
    cout<<ans;
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