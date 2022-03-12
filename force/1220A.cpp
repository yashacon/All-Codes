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
	map<char,int> m;
	for(int i=0;i<n;i++)
	{
		m[s[i]]++;
	}
	int countz=m['z'];
	int countn=m['n'];
	while(countn--)
		cout<<"1 ";
	while(countz--)
		cout<<"0 ";
}