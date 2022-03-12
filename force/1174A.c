#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[2*n];
    long sum=0,sum1,sum2;
    bool flag=0;
    for(int i=0;i<2*n;i++){
        cin>>a[i];    
        sum+=a[i];
        if(i==n-1)
        sum1=sum;
        if(i==2*n-1)
        sum2=sum-sum1;
        if(i>0&&a[i]!=a[i-1])
        flag=1;
    }
   if(sum1!=sum2)
   {
       for(int i=0;i<2*n;i++)
           cout<<a[i]<<' ';
        return 0;
   }
   else if(flag==0)
   {
       cout<<"-1"<<' ';
       return 0;
   }
   else{
   for(int i=0;i<n;i++)
   {
       for(int j=(2*n)-1;j>=n;j--)
       if(a[i]!=a[j])
       {
           int q=a[j];
           a[j]=a[i];
           a[i]=q;
           j=n-1;
           i=n+1;
       }
   }
   for(int i=0;i<2*n;i++)
           cout<<a[i]<<' ';
   }
    return 0;
}