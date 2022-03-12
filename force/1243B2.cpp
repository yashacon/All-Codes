#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repe(i,a,b)  for(ll i=a;i<=b;i++)
#define nl cout<<"\n";

 
#define pii pair<ll,ll>
#define vi  vector<ll>
#define vii vector<pii>
#define mi  map<ll,ll>
#define all(a)  (a).begin(),(a).end()

 
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define MOD 1000000007
 
#define test4(x,y,z,a) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<"		a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"		y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
#define N 300009
 
void fun()
{
	ll n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	map<char,ll> mp;
	rep(i,0,n)
	{
		mp[s[i]]++;
		mp[t[i]]++;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second % 2 )
		{
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
	vii v;
	int count=0;
	rep(i,0,n)
	{
		if(s[i]!=t[i])
		{
			int j=i+1;
			while(t[i]!=t[j] &&  j<n)
				j++;
			if(j==n)
			{
				j=i+1;
				while(t[i]!=s[j]&&j<n)
					j++;
				if(j==n)
				{
					cout<<"No\n";
					return;
				}
				else
				{
					v.pb(mk(j+1,j+1));
					v.pb(mk(i+1,j+1));
					count+=2;
					swap(s[j],t[j]);
					swap(s[i],t[j]);
				}
			}
			else
			{
				v.pb(mk(i+1,j+1));
				count++;
				swap(s[i],t[j]);
			}
		}
	}
	cout<<count;
	nl
	for(auto it:v)
		cout<<it.first<<" "<<it.second<<"\n";
	//cout<<s<<"\n"<<t<<"\n";


}
int main()
{
	IOS
	ll t=1;
	cin>>t;
	while(t--)
		fun();
	return 0;
}