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
	ll n,k;
	cin>>n>>k;
	ll a[n];
	mi m;
	rep(i,0,n){
		cin>>a[i];
		m[a[i]]=0;
	}
	deque <ll > q;
	rep(i,0,n)
	{
		if(m[a[i]]==0)
		{
			q.push_back(a[i]);
			if(q.size()>k){
				m[q.front()]=0;
				q.pop_front();
			}
			m[a[i]]=1;

		}
	}
	cout<<q.size();
	nl
	while(!q.empty())
	{
		cout<<q.back()<<" ";
		q.pop_back();
	}
	nl
}
int main()
{
	IOS
	ll t=1;
	//cin>>t;
	while(t--)
		fun();
	return 0;
}