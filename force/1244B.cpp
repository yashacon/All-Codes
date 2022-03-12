#include<bits/stdc++.h>

using ll=long long int;
using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool flag1=0,flag2=0;
		int store1=-1,store2=-1;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1' && flag1==0)
			{
				store2=i;
				flag1=1;


			}
			else if(s[n-1-i]=='1' && flag2==0)
			{
				store1=n-1-i;
				flag2=1;
			}
			if(flag1&&flag2)
				break;
		}
		
		int h;
		if(flag1==0&&flag2==0)
		{
			h=n;
			cout<<h<<"\n";
		}
		else
		{
			
			h=max(store1+1,n-store2);
				cout<<h*2<<"\n";
			
		}
	

	}

	return 0;
}