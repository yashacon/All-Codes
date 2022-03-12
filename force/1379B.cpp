#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define nl cout<<"\n";
void fun()
{
    ll l,r,m;
    cin>>l>>r>>m;
    if(m>=l&&m<=r)
        cout<<m<<" "<<r<<" "<<r;
    else
    rep(i,l,r+1){
        if(m%i<=r-l&&m+(r-(m%i))-r>0){
            cout<<i<<" "<<r<<" "<<r-(m%i);
            break;
        }
        else if((i-(m%i))<=r-l){
            cout<<i<<" "<<r-(i-(m%i))<<" "<<r;
            break;
        }
    }
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