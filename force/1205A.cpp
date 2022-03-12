#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%2)
	{
		cout<<"YES"<<endl;
		int a[2*n];
		int count2=1;
		for(int i=0;i<2*n;i=i+2){
			a[i]=count2;
		    count2+=2;
		}
		int count=2;
		for(int i=n;count<=n*2;i=i+2){
			a[i%(2*n)]=count;
			count+=2;
		}
		cout<<a[0]<<" ";	
		for(int i=(2*n)-1;i>0;i--)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}