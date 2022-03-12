#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
	int t,n;
	long int newx,newy;
	vector<pair <long int,long int>>knight;
	vector<pair<long int,long int>>king;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int count=0;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			long int x,y;
			cin>>x>>y;
			knight.push_back({x,y});
		}
		long int a,b;
		cin>>a>>b;
		king.push_back({a,b});
		king.push_back({a-1,b});
		king.push_back({a,b-1});
		king.push_back({a+1,b});
		king.push_back({a,b+1});
		king.push_back({a+1,b+1});
		king.push_back({a-1,b-1});
		king.push_back({a+1,b-1});
		king.push_back({a-1,b+1});
		for(int j=0;j<n;j++)
		{
			newx=knight[j].first+2;
			newy=knight[j].second+1;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
					    king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			newx=knight[j].first+2;
			newy=knight[j].second-1;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
						king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			newx=knight[j].first-2;
			newy=knight[j].second+1;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
						king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			newx=knight[j].first-2;
			newy=knight[j].second-1;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
						king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			newx=knight[j].first+1;
			newy=knight[j].second+2;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
						king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			newx=knight[j].first-1;
			newy=knight[j].second+2;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
						king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			newx=knight[j].first+1;
			newy=knight[j].second-2;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
						king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			newx=knight[j].first-1;
			newy=knight[j].second-2;
			for(int k=0;k<9;k++)
			{
				if(newx==king[k].first&&newy==king[k].second)
					{
						count++;
						king[k].second=king[k].second*(-10000);
						k=9;
					}
			}
			
			if(count==9)
				{
				    cout<<"YES"<<endl;
				    j=n;
				}
		}
		if(count!=9)
			cout<<"NO"<<endl;

	}
	return 0;
}