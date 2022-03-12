#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define nl cout<<"\n";
#define MS(x, y) memset(x, y, sizeof(x))
#define vi  vector<ll>
 
#define pb push_back

void fun()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vi ans,zero,one;
    ll c=0;
    rep(i,0,n){
        if(s[i]=='1'){
            if(zero.size()==0){
                c++;
                ans.pb(c);
                one.pb(c);
            }
            else{
                one.pb(zero.back());
                ans.pb(zero.back());
                zero.pop_back();

            }
        }
        else{
            if(one.size()==0){
                c++;
                ans.pb(c);
                zero.pb(c);
            }
            else{
                zero.pb(one.back());
                ans.pb(one.back());
                one.pop_back();

            }
        
        }
    }
    cout<<c;
    nl
    for(auto x: ans)
        cout<<x<<" ";
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
    cin>>t;
    while(t--)
        fun();
    return 0;
}