#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		set <char> d1;

		for(int i=0;i<s1.length();i++){
			d1.insert(s1[i]);
			


		}
		bool flag=1;
		for(int i=0;i<s1.length();i++)
			if(d1.find(s2[i])!=d1.end())
			{
				cout<<"YES\n";
				flag=0;
				break;
			}
		if(flag)
			cout<<"NO\n";

	}
}