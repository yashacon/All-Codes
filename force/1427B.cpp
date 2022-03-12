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
    string s;
    cin>>s;
    ll ans = 0;
    vector<pair<char,ll>>v;
    int i=0;
    while(i<n) {
        char last=s[i];
        ll count=0;
        while(i<n && s[i]==last) {
            count++;
            i++;
        }
        v.pb({last,count});
    }
    rep(i,0,v.size()){
        if(v[i].first != 'L')
            ans+= 2*(v[i].second) - 1;
    }
    vi arr1,arr2;
    if(v.size() == 2) {
        ll maxl;
        if(v[0].first != 'W')
            maxl = v[0].second;
        else
            maxl = v[1].second;
        ans += min(maxl,k)*2;
        cout<<ans<<"\n";
        return;
    }
    if(v.size() == 1) {
        if(v[0].first != 'W') 
            cout<<max((ll)0,2*k-1)<<"\n";
        else
            cout<<max((ll)0,2*n-1)<<"\n";
        return;
    }
    
    if(v[0].first != 'W')
        arr1.pb(v[0].second);
    if(v.back().first != 'W')
        arr1.pb(v.back().second);

    sort(all(arr1));

    rep(i,1,v.size()-1) {
        if(v[i].first != 'W')
            arr2.pb(v[i].second);
    }
    sort(all(arr2));
    for(auto x:arr2) {
        if(x>k) {
            ans += 2*k;
            k=0;
            
        }
        else {
            ans+= (2*x+1);
            k-= x;
        }
    }
    for(auto x:arr1) {
        if(x>k) {
            ans +=2*k;
            k=0;
            
        }
        else {
            ans+=2*x;
            k-= x;
        }
    }
    cout<<ans<<"\n";
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