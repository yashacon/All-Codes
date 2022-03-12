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
void fun(ll a[][2],ll v[])
{
	ll n;
	cin>>n;
	int count=0;
	rep(i,0,n)
		if(v[i]==v[n-1])
		count++;
	cout<<count;
	nl
	return;
}
int main()
{
	IOS
	ll t;
	ll a[128][2];
	memset(a,0,sizeof(a));
	a[0][1]=0,a[0][0]=2;
	ll v[128];
	v[0]=0,v[1]=0;
	rep(i,1,127)
	{
		if(a[v[i]][0]==1)
		{
			a[0][0]++;
			v[i+1]=0;
			a[v[i]][1]=i;
		}
		else if(a[v[i]][0]>1)
		{
			
			v[i+1]=i-a[v[i]][1];
			a[v[i+1]][0]++;
			a[v[i]][1]=i;

		}
		else
		{
			a[0][0]++;
			//a[0][1]=i+1;
			v[i+1]=0;
		}

	}
	cin>>t;
	while(t--)
		fun(a,v);
	return 0;
}