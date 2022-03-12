#include<bits/stdc++.h>
#define max 1000010
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    bool prime[max]={0};
    prime[1]=1;
    for(int i=2;i*i<max;i++)
        if(!prime[i])
            for(int j=i*i;j<max;j+=i)
                prime[j]=1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long  x;
        cin>>x;
        if(x==1)
            cout<<"NO\n";
        else{
            long long z=(long long) sqrt(x);
            if(z*z==x && prime[z]==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}