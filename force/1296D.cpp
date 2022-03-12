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
	ll n,a,b,k;
	cin>>n>>a>>b>>k;
	ll hp[n],p;
	rep(i,0,n){
		cin>>p;
		ll o=p%(a+b);
		if(o==0)
		{
			hp[i]=((b+a-1)/a);

		}
		else
		{
			hp[i]=((o+a-1)/a)-1;

		}
	}
	sort(hp,hp+n);
	
	ll sum=0;
	ll count=0;
	rep(i,0,n){
		sum+=hp[i];
		if(sum<=k)
		{
			count++;
		}
		else break;
			
	}
	cout<<count;
	nl
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