#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int a1,a2;
	cin>>a1>>a2;
	int k1,k2,n;
	cin>>k1>>k2>>n;
	int min=(n>(a1*(k1-1)+a2*(k2-1)))? n-(a1*(k1-1)+a2*(k2-1)) : 0 ;
	if(k2*a2<k1*a2){
		swap(k2,k1);
		swap(a2,a1);
	}
	int temp=n/k1;
	int max;
	if(temp>a1)
	{
		max=a1;
		n-=a1*k1;
	}
	else
	{
		max=temp;
		n-=temp*k1;
	}
	int temp1=n/k2;
	if(temp1>a2)
	{
		max+=a2;
		n-=a2*k2;
	}
	else
	{
		max+=temp1;
		n-=temp1*k2;
	}
	cout<<min<<" "<<max<<"\n";
	return 0;
}