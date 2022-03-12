#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
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
	ll n,m;
	cin>>n>>m;
	ll a[n]={0};
	int x,y;
	rep(i,0,m)
	{
		
		cin>>x>>y;
		a[x-1]++;
		a[y-1]++;

	}
	if(m%2==0)
	{
		cout<<"1\n";
		rep(i,0,n)
			cout<<"1 ";
		nl
		return;

	}
	ll odd=-1;
	rep(i,0,n)
		if(a[i]&1)
		{
			odd=i;
			break;
		}
	if(odd!=-1){
		cout<<"2\n";

		rep(i,0,n){
			if(i!=odd)
			cout<<"1 ";
			else
				cout<<"2 ";
		}

		nl
		return;
	}
	else
	{
		cout<<"3\n";

		rep(i,0,n){
			if(i==x-1)
			cout<<"2 ";
			else if(i==y-1)
				cout<<"3 ";
			else
				cout<<"1 ";
		}

		nl
		return;
	}


	

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