#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;

const int MOD=1e9+7;

int main()

{

    ll t;

    cin>>t;

   

    for(int i=0;i<t;i++)

    {

        ll n,k;

        cin>>n>>k;

        ll x,y,d,a,no,ans;

        x=k;

        y=(k+n-1);

        d=n-1;

        a=(x-1)%d;

        no=((x-1-a))/d;

        no++;

        if(no%2==0)

        {

            ll n1=no/2;

            ll q=(((no%MOD - 1 + MOD)%MOD)*(d%MOD))%MOD;

            ll p=((2*a)%MOD+q%MOD)%MOD;

            ans=((n1%MOD)*(p%MOD))%MOD;

        }

        else

        {

            ll n1=(no-1)/2;

            ll q=(n1%MOD)*(d%MOD)%MOD;

            ll p=(a%MOD+q%MOD)%MOD;

            ans=((no%MOD)*(p%MOD))%MOD;

        }

        cout<<ans<<endl;
    }
}