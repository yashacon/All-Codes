#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b)  for(ll i=a;i>=0;i--)
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


template <typename A>
istream& operator>>(istream& input,vector<A>& x) {
  for(auto& i:x)
    input>>i;
  return input;
}
 
template<typename A>
ostream& operator<<(ostream& output,vector<A>& x) {
  for(auto& i:x)
    output<<i<<' ';
  return output;
}
 
 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
void write(ll a[],ll n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}


void fun()
{
	ll n,m;
	cin>>n>>m;
	vector<vector<ll>> v(n,vector<ll>(m,0));
	vector<vector<ll>> v2(n,vector<ll>(m,0));
	multimap<ll,pair<ll,ll>> mp;
	rep(i,0,n)
		rep(j,0,m){
				cin>>v[i][j];
				mp.insert({v[i][j],{i,j}});
			}
	
	int j=0;
	for(auto x=mp.begin();x!=mp.end();x++){
		v2[x->second.first][j]=x->first;
		// cout<<v[x->second.first][x->second.second]<<" ";
		v[x->second.first][x->second.second]=-1;
		if(++j==m)
			break;
	}
	rep(i,0,n){
	    ll z=0;
	    rep(j,0,m){
	        if(z<m){
	            if(v2[i][z]==0){
	                if(v[i][j]!=-1){
	                	v2[i][z]=v[i][j];
	                	z++;
	                }
	            }
	            else{ 
	            	z++;
	            	j--;
	            }
	        }
	    }
	    
	}
 
	for(auto x:v2){
		for(auto y:x)
			cout<<y<<" ";
		nl
	}
}
int main()
{
	IOS
	#ifndef ONLINE_JUDGE
        if (fopen("input.txt", "r"))
        {
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        }
    #endif
	ll t=1;
	cin>>t;
	while(t--)
		fun();
	return 0;
}