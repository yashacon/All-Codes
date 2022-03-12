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
 
 
void fun(ll p[])
{
	ll n;
	cin>>n;
	ll a[n];
	 
	rep(i,0,n)
		cin>>a[i];
	ll ans=0;
        ll mm=a[0];
        rep(i,1,n){
 
            mm = max(mm, a[i]);
            ll diff=a[i]-mm;
            ll temp=0;
            if(diff<0){
                diff=abs(diff);
                for(int i=0;i<60;i++){
                    if(p[i]>diff){
 
                        temp=i-1;
                        break;
                    }
                    else if(p[i]==diff){
                        temp=i;
                        break;
                    }
                }
                ans=max(temp+1,ans);
            }
        }
        cout<<ans;
        nl
        return;
    
    // cout << "NO" << endl;
}
int main()
{
	IOS
	ll t=1;
	cin>>t;
	ll p[61];
    for(int i=0;i<=60;i++){
        p[i]=pow(2,i);
    }
	while(t--)
		fun(p);
	return 0;
}