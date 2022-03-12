#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define nl cout<<"\n";

void fun()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool f=0;
    rep(i,1,n)
        if(s[i]!=s[i-1]){
            f=1;
            break;
        }
    if(!f){
        ll sol=n/3;
        sol+=(n%3!=0);
        cout<<sol;
        nl
        return;
    }
    ll ans=0;
    if(s[n-1]==s[0]){
        int i=n-1;
        while(s[i]==s[0]){
            s.pop_back();
            i--;
        }
        int count=n-1-i;
        string h(count,s[0]);
        s=h+s;
    }
    ll c=0;
    rep(i,1,n){
        if(s[i]==s[i-1]){
            if(c==0)
                c++;
            c++;
        }
        else{
            c=0;
        }
        if(c==3){
            ans++;
            c=0;
            i++;
        }

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
    cin>>t;
    while(t--)
        fun();
    return 0;
}