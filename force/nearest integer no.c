#include<bits/stdc++.h>
using namespace std;
int check(int a)
{
    int r=0;
    while(a!=0)
    {
    	r+=a%10;
    	a/=10;
    }
    int rem=r%4;
    return rem;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,c,ans;
    cin>>a;
    c=check(a);
    while(c!=0)
    {
        a=a+4-c;
        c=check(a);
        
    }
    cout<<a<<endl;
    
    return 0;

}