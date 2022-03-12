#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repe(i,a,b)  for(ll i=a;i<=b;i++)
#define nl cout<<"\n";

 
#define pii pair<ll,ll>
#define vi  vector<ll>
#define vii vector<pii>
#define mi  map<ll,ll>
#define all(a)  (a).begin(),(a).end()
 
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
 
#define test4(x,y,z,a) cout<<"x is "<<x<<"        y is "<<y<<"        z is "<<z<<"        a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"        y is "<<y<<"        z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"        y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
#define N 300009
 
void fun()
{
    ll n;
    cin>>n;
    ll a[n];
    rep(i,0,n)
        cin>>a[i];
    
    sort(a,a+n);
    vi v1,v2;
    rep(i,0,n)
        if(i<n/2)
            v1.pb(a[i]);
        else
            v2.pb(a[i]);
    reverse(v1.begin(),v1.end());
    for(ll i=1,j=0;i<n&&j<v1.size();i+=2,j++)
        a[i]=v1[j];
    for(ll i=0,j=0;i<n&&j<v2.size();i+=2,j++)
        a[i]=v2[j];
    rep(i,0,n)
        cout<<a[i]<<" ";
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