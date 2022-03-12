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
	ll n;
	cin>>n;
	ll a[2][n];
	rep(i,0,n)
		cin>>a[0][i];
	rep(i,0,n)
		cin>>a[1][i];
	ll dp[2][n+1];
	memset(dp,0,sizeof(dp));
	rep(i,1,n+1)
	{
		dp[0][i]=max(dp[0][i-1],dp[1][i-1]+a[0][i-1]);
		dp[1][i]=max(dp[1][i-1],dp[0][i-1]+a[1][i-1]);
	}
	cout<<max(dp[1][n],dp[0][n]);
	return;
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