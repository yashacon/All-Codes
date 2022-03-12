#include<bits/stdc++.h>
using namespace std;
typedef int ll;

#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int main()
{
	IOS
	ll t;
	cin>>t;
	while(t--){
		ll n,ma=0;
    	cin>>n;
    	ll a[n];
    	map<int,int> s;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		s[a[i]]=0;
    	}
    	for(int i=0;i<n;i++)
    	{
    	    int l=sqrt(a[i]);
    		for(int j=1;j<=l;j++)
    		{
    			if(a[i]%j==0)
    			{
    				s[j]++;
    				if(a[i]/j!=j)
    					s[a[i]/j]++;
    
    			}
    		}
    		ma=max(ma,s[a[i]]);
    	}
    	cout<<ma-1<<"\n";
	}
	return 0;
}