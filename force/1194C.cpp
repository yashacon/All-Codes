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
		string s,t,p;
		cin>>s>>t>>p;
		int cnt[26]={0};
		for(int i=0;i<s.length();i++)	
			cnt[s[i]-'a']++;
		for(int i=0;i<t.length();i++)
			cnt[t[i]-'a']--;
		for(int i=0;i<p.length();i++)
			cnt[p[i]-'a']++;
		bool flag=0;
		for(int i=0;i<26;i++)
			if(cnt[i]<0)
			{
				flag=1;
				cout<<"NO\n";
				break;
			}
		if(!flag)
		{
			int x=0;
			//bool flag2=0;
			for(int i=0;i<t.length() && x<s.length();i++)
			{
				if(s[x]==t[i]) x++;
			}
			if(x==s.length())
			{
				//flag2=1;
				cout<<"YES\n";
			}
			else
			cout<<"NO\n";
		}
			
	}
	return 0;
}