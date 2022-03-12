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
	int a[2][n];
	string s;
	for(int i=0;i<2;i++)
	{
		cin>>s;
		for(int j=0;j<n;j++)
			a[i][j]=s[j]-48;
		
	}
	ll i=0,j=0;
	rep(j,0,n)
	{
		if(a[i][j]==1||a[i][j]==2)
			continue;
		if(a[1-i][j]>=3)
			i=1-i;
		else{
			cout<<"NO\n";
			return;
		}
	}
			
	if(i==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";


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