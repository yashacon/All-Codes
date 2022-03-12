#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
    cin >> t;
    while(t--){
    	ll n,m,k;
        cin >> n >> m >> k;
        ll a[n];
        for(int i=0; i<n; i++) 
        	cin >> a[i];
        bool flag = 1;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1])
            {
                int diff = a[i+1] - a[i];
                if(diff>k) 
                {
                    ll n=diff-k;
                    if(n>m) {
                        cout << "NO" << endl;
                        flag = 0;
                        break;
                    }
                    else {
                        m -= n;
                    }
                }
                else {
                    ll z = a[i]; 
                    if(k-diff<z) 
                    	z = k-diff;
                    m += z;
                }
            }
            else {
                ll s = 0;
                if(a[i+1]>k) 
                	s = a[i+1] - k;
                ll l=a[i]-s;
                m+=l;
            }
        }
        if(flag&1) 
        	cout <<"YES"<< endl;
    }
}