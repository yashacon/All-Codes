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
#define all(a)  a.begin(),a.end()
 
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
void write(ll a[],ll n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}
ll primeFactors(ll n)
{
    ll cnt=0;
    while (n % 2 == 0)
    {
        cnt++;
        n = n/2;
    }
 
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cnt++;
            n = n/i;
        }
    }
    if (n > 2)
        cnt++;
    return cnt;
}
void fun()
{
	ll n,l,r;
    cin>>n>>l>>r;
    ll comm=gcd(n,l);
    ll factr=primeFactors(comm);
    ll factrem1=primeFactors(l/comm);
    ll factrem2=primeFactors(n/comm);
    if(r>factrem2+factrem1+2*factr){
        cout<<"No\n";
        return;
    }
    int mn=0;
    mn+=(factrem1!=0)+(factrem2!=0);
    if(r-mn>=0){
        r-=mn;
        if(r%2){
            if(factrem2>1||factrem1>1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"Yes\n";
    }
    else
        cout<<"No\n";

    return;
	

}
int main()
{
	IOS
	ll t=1;
	#ifndef ONLINE_JUDGE
        if (fopen("input.txt", "r"))
        {
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
        }
    #endif
	cin>>t;
	while(t--)
		fun();
	return 0;
}