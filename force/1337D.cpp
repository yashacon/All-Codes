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
 

long long powermodm(long long x,long long n,long long M){long long result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
long long power(long long _a,long long _b){long long _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
long long gcd(long long a,long long b){if(a==0)return b;return gcd(b%a,a);}
long long lcm(long long a,long long b){return (max(a,b)/gcd(a,b))*min(a,b);}
void write(long long a[],long long n){
    rep(i,0,n)cout<<a[i]<<" ";
    nl
}


void fun()
{
		int na, nb, nc;
        cin >> na >> nb >> nc;
        vector<ll> a(na), b(nb), c(nc);
        cin >> a >> b >> c;
        ll ans = LLONG_MAX;
 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());
        b.resize(unique(b.begin(), b.end()) - b.begin());
        c.resize(unique(c.begin(), c.end()) - c.begin());
        for(int i = 0; i < b.size(); i++) {
            int id1 = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
            int id2 = lower_bound(c.begin(), c.end(), b[i]) - c.begin();
            for(int j = max(0, id1 - 10); j <= min((int)a.size() - 1, id1 + 10); j++) {
                for(int k = max(0, id2 - 10); k <= min((int)c.size() - 1, id2 + 10); k++) {
                    ll val = ((a[j] - b[i]) * (a[j] - b[i])) + ((a[j] - c[k]) * (a[j] - c[k])) + ((b[i] - c[k]) * (b[i] - c[k]));
                    
                    ans = min(ans, val);
                }                
            }
 
 
        }
        swap(a, b);
        for(int i = 0; i < b.size(); i++) {
            int id1 = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
            int id2 = lower_bound(c.begin(), c.end(), b[i]) - c.begin();
            for(int j = max(0, id1 - 10); j <= min((int)a.size() - 1, id1 + 10); j++) {
                for(int k = max(0, id2 - 10); k <= min((int)c.size() - 1, id2 + 10); k++) {
                    ll val = ((a[j] - b[i]) * (a[j] - b[i])) + ((a[j] - c[k]) * (a[j] - c[k])) + ((b[i] - c[k]) * (b[i] - c[k]));
                    
                    ans = min(ans, val);
                }                
            }
 
 
        }
        swap(b, c);
        for(int i = 0; i < b.size(); i++) {
            int id1 = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
            int id2 = lower_bound(c.begin(), c.end(), b[i]) - c.begin();
            for(int j = max(0, id1 - 10); j <= min((int)a.size() - 1, id1 + 10); j++) {
                for(int k = max(0, id2 - 10); k <= min((int)c.size() - 1, id2 + 10); k++) {
                    ll val = ((a[j] - b[i]) * (a[j] - b[i])) + ((a[j] - c[k]) * (a[j] - c[k])) + ((b[i] - c[k]) * (b[i] - c[k]));
                    
                    ans = min(ans, val);
                }                
            }
 
 
        }
        cout << ans ;
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