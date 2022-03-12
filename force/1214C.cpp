#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n%2)
	{
		cout<<"No\n";
		return 0;

	}
	else
	{
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(')
				count++;
			else
				count--;
			if(count<-1){
				cout<<"No\n";
				return 0;
			}
		}
		if(count==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";

	}
}