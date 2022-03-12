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
		long long str,inte,ex;
		cin>>str>>inte>>ex;
		long long diff=str+ex-inte;
		long long count=0;
		while(diff>0)
		{
			count++;
			diff-=2;
		}
		if(count>ex+1)
		cout<<ex+1<<"\n";
		else
		cout<<count<<"\n";
	}
}