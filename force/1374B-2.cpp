#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b)  for(ll i=a;i>=b;i--)
#define nl cout<<"\n";
#define MS(x, y) memset(x, y, sizeof(x))
 
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
 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
void fun()
{
	ll x;
	cin>>x;
	if(x==1)
	{
		cout<<"0\n";
		return;
	}
	if(x%3==0){
		ll two=0;
		while (x%2 == 0) 
	    { 
	        two++;
	        x/=2; 
	    } 
	    ll thr=0;
	    for (ll i = 3; i <= sqrt(x); i = i+2) 
	    { 
	        //cout<<x;
	        while (x%i == 0) 
	        { 
	            if(i!=3)
	            {
	            	cout<<"-1\n";
	            	return;
	            }
	            else
	            	thr++;
	            x/=i; 
	        } 
	    }
	    if((x > 2&&x==3))
	        thr++;
	    else if ((x>3)||two>thr)
	    {
	       	cout<<"-1\n";
	      	return;
	    }
	    ll diff=thr-two;
	    cout<<thr+diff;

	}
	else{
		cout<<-1;
	}
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