#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,a;
    cin>>n>>m>>a;
    long long x,y;
    x=n/a;
    if(n%a)
    	x++;
    y=m/a;
    if(m%a)
    	y++;
    cout<<x*y<<"\n";
    return 0;
}