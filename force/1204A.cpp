#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long int c=s.length();
	bool flag=0;
	for(long long int i=(c-1);i>0;i--)
		if(s[i]=='1')
		{
			flag=1;
			break;
		}
	if(c%2==0)
		cout<<c/2<<endl;
	else
		if(flag)
			cout<<c/2+1<<endl;
		else
			cout<<c/2<<endl;
	return 0;
}