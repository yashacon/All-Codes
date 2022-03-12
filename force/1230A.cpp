#include<bits/stdc++.h>
using ll=long long int;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if((a+b==c+d)||(a+c==b+d)||(a+d==b+c)||(a==b+c+d)||(b==a+c+d)||(c==a+b+d)||(d==a+b+c))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;

}