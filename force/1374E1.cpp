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
	ll n,k;
	cin>>n>>k;
	ll k2=k,k1=k;
	vi both,aa,ba;
	rep(i,0,n)
	{
		ll t,a,b;
		cin>>t>>a>>b;
		if(a==1&&b==1)
			both.pb(t);
		else if(a==1)
			aa.pb(t);
		else if(b==1)
			ba.pb(t);
	}
	if(both.size()+aa.size()<k1||both.size()+ba.size()<k1){
		cout<<"-1\n";
		return;
	}
	sort(both.begin(),both.end());
	sort(aa.begin(),aa.end());
	sort(ba.begin(),ba.end());
	ll ptr1=0,ptr2=0,ptr3=0,sum=0;
	while(k1>0||k2>0){
		if(ptr1<both.size()&&ptr2<aa.size()&&ptr3<ba.size()){
			if(k1>0&&k2>0){
				if(both[ptr1]<=aa[ptr2]+ba[ptr3]){
					k1--;
					k2--;
					sum+=both[ptr1++];
				}
				else{
					k1--;k2--;
					sum+=aa[ptr2++]+ba[ptr3++];
				}
			}
			else if(k1>0){
				if(both[ptr1]<=aa[ptr2]){
					k1--;k2--;
					sum+=both[ptr1++];
				}
				else{
					k1--;
					sum+=aa[ptr2++];
				}
			}
			else if(k2>0){
				if(both[ptr1]<=ba[ptr3]){
					k1--;k2--;
					sum+=both[ptr1++];
				}
				else{
					k2--;
					sum+=ba[ptr3++];
				}
			}
		}
		else if(ptr2<aa.size()&&ptr3<ba.size()){
			if(k1>0){
				k1--;
				sum+=aa[ptr2++];
			}
			if(k2>0){
				k2--;
				sum+=ba[ptr3++];
			}
		}
		else if(ptr1<both.size()&&ptr3<ba.size()){
			if(k1>0||both[ptr1]<=ba[ptr3]){
				k1--;k2--;
				sum+=both[ptr1++];
			}
			else{
				k2--;
				sum+=ba[ptr3++];
			}
		}
		else if(ptr1<both.size()&&ptr2<aa.size()){
			if(k2>0||both[ptr1]<=aa[ptr2]){
				k1--;k2--;
				sum+=both[ptr1++];
			}
			else{
				k1--;
				sum+=aa[ptr2++];
			}
		}
		else if(ptr1<both.size()){
			k1--;k2--;
			sum+=both[ptr1++];
		}
		else if(ptr2<aa.size()){
			if(k2>0)
			{
				cout<<"-1\n";
				return;
			}
			k1--;
			sum+=aa[ptr2++];
		}
		else if(ptr3<ba.size()){
			if(k1>0)
			{
				cout<<"-1\n";
				return;
			}
			k2--;
			sum+=ba[ptr3++];
		}
		else{
			cout<<"-1\n";
			return;
		}
	}
	cout<<sum;
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