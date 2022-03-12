#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    while(x!=0)
    {
        int n,m;
        n=x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
            cin>>b[i];
        long long int ans=0,sum1=0,sum2=0;
        int i=0,j=0;
        while(i<n&&j<m)
        {
            if(a[i]>b[j])
            {
                sum1+=b[j];
                j++;
                
            }
            else if(a[i]<b[j])
            {
                sum2+=a[i];
                i++;
            }
            else{
                sum1+=a[i];
                sum2+=a[i];
                i++;
                j++;
                ans+=max(sum1,sum2);
                sum1=0,sum2=0;
            }
        }
        //cout<<sum1<<" "<<sum2;
        //ans+=max(sum1,sum2);
        //sum1=sum2=0;
        for(;i<n;i++ )
            sum2+=a[i];
        for(;j<m;j++)
            sum1+=b[j];
        ans+=max(sum1,sum2);
        
        cout<<ans<<"\n";
        cin>>x;
    }
    return 0;
}