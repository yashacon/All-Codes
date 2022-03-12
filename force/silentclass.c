#include<bits/stdc++.h>
using namespace std;
int nCr(int n) 
{ 
    return n*(n-1) /2; 
}
int main()
 {
 	int n,x=0;
 	cin>>n;
 	int count=0;
 	string strin;
 	char s[n],ch;
 	for(int i=0;i<n;i++)
 	{
 		cin>>strin;
 		s[i]=strin[0];
 	}
 	sort(s,s+sizeof(s));
 	for(int i=0;i<n;)
 	{
 	    ch=s[i];
 		while(s[i]==ch)
 		{
 			i++;
 			count++;
 		}
 		if(count>2)
 			if(count==4)
 				x=x+2;
 			else if(count==3)
 				x=x+1;
 			else if(count%2==0)
 				x=x+2*nCr(count/2);
 			else
 				x=x+nCr((count/2)+1)+nCr(count/2);
 		count=0;
 	}
 	cout<<x<<endl;
 	return 0;
 }