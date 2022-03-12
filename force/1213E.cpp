#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
using namespace std;
int main()
{
	int n;
	ios
	string ch1,ch2;
	cin>>n;
	cin>>ch1>>ch2;
	string orig="abc";
	vector <string> v;
		string s3;
		for(int i=0;i<n;i++)
			s3+=orig;
		v.push_back(s3);
		string s4;
		for(int i=0;i<3;i++)
		for(int j=0;j<n;j++)
			s4+=orig[i];
		v.push_back(s4);
	while(next_permutation(orig.begin(),orig.end()))
	{
		string s;
		for(int i=0;i<n;i++)
			s+=orig;
		v.push_back(s);
		string s2;
		for(int i=0;i<3;i++)
		for(int j=0;j<n;j++)
			s2+=orig[i];
		v.push_back(s2);

	}
	for(auto it:v)
	{
		if(it.find(ch1)==string::npos&&it.find(ch2)==string::npos)
		{
			cout<<"YES\n"<<it<<"\n";
			return 0;
		}
	}
	cout<<"NO"<<"\n";
	return 0;
}
