#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		char s[n],s2[n];
		cin>>s;
		cin>>s2;
		for(int i=0;i<n;i++){
			if(s[i]==s2[i])
				count++;
			else if(s2[i]!='N')
				i++;
	
		}
		cout<<count<<endl;
	}
	return 0;
}