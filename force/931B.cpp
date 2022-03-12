#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	a+=n-1;
	b+=n-1;
	int count=0;
	while(a!=b)
	{
		a/=2;
		b/=2;
		count++;
	}
	if((1<<count)==n)
		cout<<"Final!\n";
	else
		cout<<count<<"\n";
	return 0;
}