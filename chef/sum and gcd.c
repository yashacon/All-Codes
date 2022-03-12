#include<bits/stdc++.h>

#include <algorithm>

using namespace std;

long int GCD(long int a, long int b) 
{
 
    if (a == 0) 
   
     return b;
 
    return GCD(b % a, a);
 
}


int main() {

	int t;

	long int n;

	long int a[100000];

	cin>>t;

	while(t--)
	
	{

	   cin>>n;

	   for(long int i=0;i<n;i++)

            cin>>a[i];

	   if(n==2)

	   {

             cout<<a[0]+a[1]<<endl;
    
	    }

           else{

	   long int high;

	   sort(a,a+n);

	   high=a[n-1];

	   long int gcd1=a[0],j=0;

	   for(long int i=1;i<n-1;i++)

	   {
	      
		 if(a[i]!=high)

	         {
	   
		        gcd1=GCD(a[i],gcd1);

		           j=i;
	  
	    	 }

	   }

	   high=a[j];

	   long int gcd2=a[0];

	   for(long int i=1;i<j;i++)

	   {

	       if(a[i]!=high)

	       {

	           gcd2=GCD(a[i],gcd2);

	       }

	   }
	
	   gcd2=GCD(a[n-1],gcd2);

	   if(gcd2+a[j]>gcd1+a[n-1])

	  	 cout<<gcd2+a[j]<<endl;

	   else

		   cout<<gcd1+a[n-1]<<endl;
   
	     }
        
	}
	
		return 0;

}
