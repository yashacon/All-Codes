#include <bits/stdc++.h>
#define f(x,y) for(i=x;i<y;i++)
using namespace std;

int main() {
	int n;
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    long double sum=0;
	    int i=0;
	    f(0,n){
	        cin>>a[i];
	        sum+=a[i];
	        
	    }
	    long double mean=sum/(double)n;
	    i=0;
	    f(0,n){
	        if((double)a[i]==mean)
	        {
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	    if(i==n)
	    cout<<"Impossible"<<endl;
	    
	}
	return 0;
}
