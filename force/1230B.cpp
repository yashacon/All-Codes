#include<bits/stdc++.h>
using ll=long long int;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	if(n==1&&k>=1)
	{
		s='0';
	}
	for(int i=0;i<n;i++)
	{
		if(k>0){
		if(i==0)
		{
			if((int)s[i]>49){
				s[i]='1';
				k--;
			}

		}
		else
		{
			if((int)s[i]>48)
			{
				s[i]='0';
				k--;
			}
		}
		}
		else break;

	}
	cout<<s<<"\n";

	return 0;

}