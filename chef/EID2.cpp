#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a[3],c[3];
		for(int i=0;i<3;i++)
			cin>>a[i];
		for(int i=0;i<3;i++)
			cin>>c[i];
		vector <pair<int,int>> v;
		for(int i=0;i<3;i++)
		{
			v.push_back(make_pair(a[i],c[i]));
		}
		/*for(int i=0;i<3;i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}*/
		sort(v.begin(),v.end());
		bool flag=0;
		for(int i=1;i<3;i++)
		{
			if(v[i].first>v[i-1].first)
			{
				if(v[i].second<=v[i-1].second){
					flag=1;
					break;
				}
			}
			if(v[i].first<v[i-1].first)
			{
				if(v[i].second >= v[i-1].second){
					flag=1;
					break;
				}
			}
			if(v[i].first == v[i-1].first)
			{
				if(v[i].second > v[i-1].second || v[i].second < v[i-1].second){
					flag=1;
					break;
				}
			}
		}

		if(!flag)
			cout<<"FAIR\n";
		else
			cout<<"NOT FAIR\n";
	}
}