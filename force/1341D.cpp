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
bool isvowel(char x){
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
		return 1;
	return 0;
}
void fun()
{
	ll n,k;
	cin>>n>>k;
	string poss[10]={
		"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"
	};
	string s[n];
	vector<vi>diff(n,vector<ll>(10,0));
	rep(i,0,n){
		cin>>s[i];
		rep(val,0,10){
			rep(dig,0,7){
				char x=poss[val][dig];
				char y=s[i][dig];
				if(x=='1'&&y=='0')
					diff[i][val]++;
				if(x=='0'&&y=='1'){
					diff[i][val]=-1;
					break;
				}

			}
		}
	}
	vector<vi>dp(n+1,vector<ll>(k+1));
	dp[n][0]=1;
	repr(i,n,1){
		rep(j,0,k+1){
			if(dp[i][j]){
				rep(val,0,10){
					if(diff[i-1][val]!=-1&&diff[i-1][val]<=k-j){
						dp[i-1][j+diff[i-1][val]]=1;
					}
				}
			}
		}
	}
	if(dp[0][k]==0){
		cout<<-1;
		nl
		return;

	}
	rep(i,0,n){
		ll curr=-1;
		repr(val,9,0){
			if(diff[i][val]!=-1&&k>=diff[i][val]&&dp[i+1][k-diff[i][val]]){
				curr=val;
				k-=diff[i][val];
				break;
			}
		}
		cout<<curr;
	}
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