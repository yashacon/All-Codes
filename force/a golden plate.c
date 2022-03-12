#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,k,sum=0;
    cin>>w>>h>>k;
    if(k>0)
    {
        int i=1;
        while(k--)
        {
            sum+=2*((w-4*(i-1))+(h-4*(i-1))-2);
            i++;
        }
        cout<<sum<<endl;
    }
    else
    cout<<0<<endl;
    return 0;
}