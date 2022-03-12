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
	ll n,p,k;
	cin>>n>>p>>k;
	ll a[n];
	rep(i,0,n)
		cin>>a[i];
	sort(a,a+n);
	ll dp[n]={0};
	dp[0]=a[0];
	for(ll i=1;i<k-1;i++)
		dp[i]=dp[i-1]+a[i];
	dp[k-1]=a[k-1];
	for(ll i=k;i<n;i++)
		dp[i]=min(dp[i-1]+a[i],dp[i-k]+a[i]);
	for(ll i=n-1;i>=0;i--)
		if(dp[i]<=p){
			cout<<i+1;
			nl
			return;
		}
	cout<<0;
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