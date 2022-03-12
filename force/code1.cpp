#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b)  for(ll i=a;i>=b;i--)
#define nl cout<<"\n";
const int MAXN=1e6+5;
ll ans[MAXN],vec[MAXN],res[MAXN*2];
ll fun2(ll n){
    ll e=0,o=0;
    while(n){
        ll dg=n%10;
        if(dg&1)
            o+=dg;
        else
            e+=dg;
        n/=10;
    }
    return abs(e-o);
}
void fun()
{
    rep(i,1,2*MAXN)
        res[i]=fun2(i);
    vec[1]=2;
    vec[2]=2*res[3]+res[4];
    rep(i,3,MAXN)
        vec[i]=vec[i-1]+2*(-res[i]+res[2*i-2]+res[2*i-1])+(-res[2*i-2]+res[2*i]);
    ans[1]=2;
    rep(i,2,MAXN)
    ans[i]=ans[i-1]+vec[i];

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
    fun();
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<ans[n];
        nl
    }
    return 0;
}