#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b)  for(ll i=a;i>=b;i--)
#define nl cout<<"\n";
 
#define vi  vector<ll>
#define all(a)  (a).begin(),(a).end()
 
#define pb push_back

void fun()
{
    ll n,k;
    cin>>n>>k;
    vi v(n);
    bool f=0,f1=0;
    ll sum=0;
    for(auto &x:v){
        cin>>x;
        sum+=x-k;
        if(x==k)
            f=1;
        else
            f1=1;
    }
    if(f1==0){
        cout<<"0\n";
        return;
    }
    if(sum==0||f)
        cout<<1;
    else
        cout<<2;
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