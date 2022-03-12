#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int x;
	vector <int> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
		
	}
	sort(v.begin(),v.end());
	int count=0;
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[j]%v[i]==0)
			{
				count++;
				auto it=v.begin()+j;
				v.erase(it);
				j--;
			}
		}
	}
	cout<<n-count<<"\n";
}