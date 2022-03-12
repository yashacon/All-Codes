#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	char check=('z'+1);
	for(int i=0;i<s.length();i++)
		if(s[i]>check)
			cout<<"Ann\n";
		else{
			cout<<"Mike\n";
			check=s[i];
		}
	return 0;
}