#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string a,b,c;
	cin>>a>>b>>c;
	if(a==b&&b==c)
	{
		cout<<"0\n";
		return 0;
	}
	if(a==b||a==c||b==c)
    {
        cout<<1<<endl;
        return 0; 
    }
	if(a>b)	swap(a,b);
	if(a>c)	swap(a,c);
	if(b>c)	swap(b,c);

	if(a[1]==b[1]&&b[1]==c[1])
	{
        if(a[0]+1==b[0]&&b[0]+1==c[0])
        {
            cout<<0<<endl;
            return 0;
        }
    }
	
    if(a[1]==b[1])
    {
        if(a[0]+1==b[0]||a[0]+2==b[0])
        {
            cout<<1<<endl;
            return 0; 
        }
    } 


    if(a[1]==c[1])
    {
        if(a[0]+1==c[0]||a[0]+2==c[0])
        {
    	    cout<<1<<endl;
            return 0; 
        }
    }
	
	if(b[1]==c[1])
    {
        if(b[0]+1==c[0]||b[0]+2==c[0])
        {
            cout<<1<<endl;
            return 0;
        }
     }
         
    cout<<2<<endl;
	
	return 0;
		
}