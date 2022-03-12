#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define nl cout<<"\n";
 
#define MOD 1000000007
 

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
    ll powww[400001]={1};
    rep(i,1,400001)
        powww[i]=(2*powww[i-1])%MOD;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll fs[n];
        map<ll,ll> sc;
        vector<bool>vis(n+1,0);
        rep(i,0,n)
            cin>>fs[i];
        rep(i,0,n){
            ll x;
            cin>>x;
            sc[x]=fs[i];
        }
        ll ans=0;
        rep(i,1,n+1){
            if(vis[i])
                continue;
            ll y=sc[i];
            vis[i]=1;
            while(y!=i){
                vis[y]=1;
                y=sc[y];
            }
            ans++;
        }
        cout<<powww[ans];
        nl
    }
    return 0;
}