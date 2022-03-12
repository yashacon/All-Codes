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
    cout<<(n/2)+1;
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