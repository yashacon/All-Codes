#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],e[2]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];    
        e[a[i]%2]=1;
    }
  if(e[0]&&e[1])
  sort(a,a+n);
   for(int i=0;i<n;i++)
           cout<<a[i]<<' ';
   
    return 0;
}