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
	ll a[n],sum=0;
	rep(i,0,n){
		cin>>a[i];
		sum+=a[i];
	}
	ll maxe = -1000000001, maxv = 0; 
    ll start =0, end = 0, s=0;
    for (ll i=1; i< n; i++ ) 
    { 
        maxv += a[i]; 
  
        if (maxe < maxv) 
        { 
            maxe= maxv; 
            start = s; 
            end = i; 
        } 
  
        if (maxv< 0) 
        { 
            maxv= 0; 
            s = i + 1; 
        } 
    } 
    ll maxe1 = -1000000001, maxv1 = 0; 
    ll start1 =0, end1 = 0, s1=0;
    for (ll i=0; i< n-1; i++ ) 
    { 
        maxv1 += a[i]; 
  
        if (maxe1 < maxv1) 
        { 
            maxe1= maxv1; 
            start1 = s1; 
            end1 = i; 
        } 
  
        if (maxv1< 0) 
        { 
            maxv1= 0; 
            s1 = i + 1; 
        } 
    } 
    maxe=max(maxe,maxe1);
    
   if(maxe>=sum)
   		cout<<"NO\n";
   	else
   		cout<<"YES\n";
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