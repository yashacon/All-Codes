#include<bits/stdc++.h>
using namespace std;
long long gcd(long long n,long long m)
{
	if(m==0)
	return n;
	else
	return gcd(m,n%m);
}
int main()
{
	long long n,m,k;
	cin>>n>>m>>k;
	long long g=gcd(n,m);
	long long sx,sy,ex,ey;
	long long div1=n/g;
	long long div2=m/g;
	while(k--){
		cin>>sx>>sy>>ex>>ey;
		if(((sx==1 &&ex==1)&&((sy-1)/div1==(ey-1)/div1))||((sx==2 &&ex==2)&&((sy-1)/div2==(ey-1)/div2))||((sx==1&&ex==2)&&((sy-1)/div1==(ey-1)/div2))||((sx==2&&ex==1)&&((sy-1)/div2==(ey-1)/div1)))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}


	return 0;

}