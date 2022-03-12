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



 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
void write(ll a[],ll n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}

#define N 100050
 
ll lpf[N], mobius[N];
void least_prime_factor()
{
    rep(i,2,N)
 
        if (!lpf[i])
 
            for (ll j = i; j < N; j += i)
 
                if (!lpf[j])
                    lpf[j] = i;
}
 
void Mobius()
{
    rep(i,1,N){

        if (i == 1)
            mobius[i] = 1;
        else {
            if (lpf[i / lpf[i]] == lpf[i])
                mobius[i] = 0;
            else
                mobius[i] = -1 * mobius[i / lpf[i]];
        }
    }
}
ll gcd_pairs(vector<ll> &a, ll n)
{
    ll maxi = 0;
    ll fre[N] = { 0 };
    rep(i,0,n) {
        fre[a[i]]++;
        maxi = max(a[i], maxi);
    }
 
    least_prime_factor();
    Mobius();
    ll ans = 0;
    rep(i,1,maxi+1){
        if (!mobius[i])
            continue;
 
        ll temp = 0;
        for (int j = i; j <= maxi; j += i)
            temp += fre[j];
 
        ans += temp * (temp - 1) / 2 * mobius[i];
    }
    return ans;
}
void fun()
{
	ll n;
	cin>>n;
	vector<ll> ev,od;
	rep(i,0,n){
		ll x;
		cin>>x;
		if(x%2)
			od.pb(x);
		else
			ev.pb(x);
	}
	sort(all(od),greater<ll>());
	ll ans=ev.size()*od.size();
	ll esz=ev.size();
	ans+=(esz*(esz-1))/2;
	ll osz=od.size();
	ans+=((osz*(osz-1))/2)-gcd_pairs(od, osz);
	cout<<ans;
	nl
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