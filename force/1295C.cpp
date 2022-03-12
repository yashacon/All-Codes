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
	string s,t;
	cin>>s>>t;
	vector<vector<int>>v(26);
	for(int i=0;i<s.length();i++)
		v[s[i]-'a'].push_back(i);
	ll count=1;
	int cur_ind=-1;
	for(int i=0;i<t.size();i++)
	{
		if(v[t[i]-'a'].size()==0)
		{
			cout<<"-1\n";
			return;

		}
		else if(upper_bound(v[t[i]-'a'].begin(),v[t[i]-'a'].end(),cur_ind)!=v[t[i]-'a'].end()){
			int y=upper_bound(v[t[i]-'a'].begin(),v[t[i]-'a'].end(),cur_ind)-v[t[i]-'a'].begin();
			cur_ind=v[t[i]-'a'][y];
		}
		else
		{
			cur_ind=v[t[i]-'a'][0];
			count++;
		}
	}
	cout<<count;
	nl
	return;

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