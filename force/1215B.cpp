#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,ans1=0,ans2=0;
    cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
        cin>>a[i];
    
    ll dp[2][n+1];
    memset(dp,0,sizeof(dp));
    for(ll i=1;i<n+1;i++){
         if(a[i]>0){
            dp[0][i]=1+dp[0][i-1];
            dp[1][i]=dp[1][i-1];
         }
         else {
            dp[0][i]=dp[1][i-1];
            dp[1][i]=1+dp[0][i-1];
            
         }
        ans1+=dp[1][i];
        ans2+=dp[0][i];
    }
    
    cout<<ans1<<" "<<ans2<<"\n";
    
    return 0;
}