#include <iostream>
using namespace std;

int main() {
	long t;
	long long unsigned int n,k;
	cin>>t;
	while(t--){
	    long long int a,d;
	    long h;
	    long long unsigned int sum=0;
	    cin>>n;
	    cin>>k;
	    a=(k-n);
	    d=-1*(n-1);
	    if(a>0)
	    {
	        h=(-1*a/d)+1;
	        sum=(((h*((((2*a))+((h-1)*d))%1000000007)))/2)%1000000007;
	        //cout<<sum<<endl;
	    }
	    cout<<((k-1)+sum)%1000000007<<endl;
	}
	return 0;
}

//12 13 24 25 26 36 37 38 39 48 49 50 51 52 60 61 62 63 64 65 72  73 74 75 
//12 13 14 24 25 26 27 28 36 37 38 39 40 41 42 48 
//12 13 14 15 16 24 25 26 27 28 29 30 31 32 36 