#include<bits/stdc++.h>
using namespace std;
long long powe(long y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) {
        return (powe(y/2) * powe( y / 2))%1000000007; 
    }
        
    else{
        return (2*powe(y / 2)*powe(y / 2))%1000000007; 
    }
        
} 
int main() {
	long t,k;
	long long po;
	cin>>t;
	while(t--)
	{
	    cin>>k;
	    po=powe(k);
	    cout<<(po*5)%1000000007<<endl;
	}
	return 0;
}
