#include <bits/stdc++.h>
#define ll long long
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main (){
    IOS
    ll t;
    cin>>t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        if( m>n*(n+1)/2 || m<n-1){
            cout<<"-1\n";
            continue;
        }
        if( n == 1 && m == 1)
            cout<<"1\n";
        else if( n == 1  && m == 0)
            cout<<"0\n";
        else if( n == 2 && m == 1)
            cout<<"1\n";
        else{
            if( m <= n+1){
                cout<<"2\n";
            }
            else if( m <= 2*n){
                cout<<"3\n";
            }
            else{
                m-=2*n;
                ll x=0;
                ll count = 0;
                while(x<m){
                    if(count&1)
                        x+=(n+1)/2;
                    else
                        x+=(n/2);
                    count++;
                }
                cout<<count+3<<"\n";
            }
        }
        
    }
}