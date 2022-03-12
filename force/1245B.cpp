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
	ll a,b,c;
	cin>>a>>b>>c;
	string s;
	char ans[n];
	cin>>s;
	int count=0;
	rep(i,0,n)
	{
		if(s[i]=='R')
		{
			if(b>0){
				ans[i]='P';
				b--;
				count++;
			}
			else
				ans[i]='0';
			

		}
		else if(s[i]=='P')
		{
			if(c>0){
				ans[i]='S';
				c--;
				count++;
			}
			else
				ans[i]='0';

		}
		else if(s[i]=='S')
		{
			if(a>0){
				ans[i]='R';
				a--;
				//cout<<a;
				count++;
			}
			else
				ans[i]='0';

		}
	}
	if(n%2)
	{
		if(count>n/2)
		{
			cout<<"YES\n";
			rep(i,0,n)
			{
				if(ans[i]=='P'||ans[i]=='R'||ans[i]=='S')
					cout<<ans[i];
				else
				{
					if(a>0)
					{
						cout<<'R';
						a--;
					}
					else if(b>0)
					{
						cout<<'P';
						b--;
					}
					else
						cout<<'S';
						c--;
				}

			}
			nl

		}
		else
			cout<<"NO\n";
	}
	else
	{
		if(count>=n/2)
		{
			cout<<"YES\n";
			rep(i,0,n)
			{
				if(ans[i]=='P'||ans[i]=='R'||ans[i]=='S')
					cout<<ans[i];
				else
				{
					if(a>0)
					{
						cout<<'R';
						a--;
					}
					else if(b>0)
					{
						cout<<'P';
						b--;
					}
					else
						cout<<'S';
						c--;
				}

			}
			nl
		}
		else
			cout<<"NO\n";
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