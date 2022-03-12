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
	bitset<10> s[n];
    string r;
    rep(i,0,n){
        cin>>r;
        s[i] = bitset<10>(r);
        
    }
	int count=0;
	rep(i,0,10)
	{
		bool flag=0;
		rep(j,0,n)
		{
			flag^=s[j][i];
		}
		count+=flag;
	}
	cout<<count;
	nl
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