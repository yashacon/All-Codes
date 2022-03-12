#include<bits/stdc++.h>
using namespace std;
using ll= long long int ;
using ld= long double ;
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
 

#define test2(x,y) cout<<"x is "<<x<<"		y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
#define test4(x,y,z,a) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<"		a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<endl;
#define N 300009
 
void fun()
{
	ll n;
	cin>>n;
	ll a[n];
	rep(i,0,n)
	{
		cin>>a[i];

	}
	sort(a,a+n);
	bool flag=0;
	rep(i,1,n)
	{
		if(a[i]-a[i-1]==1){
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"2";
	else
		cout<<"1";
	nl
	return ;
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