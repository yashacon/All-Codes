#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long a[n];
	long long odd=0,even=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]&1)
			odd++;
		else
			even++;
	}
	cout<<min(odd,even)<<"\n";
}