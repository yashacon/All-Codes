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
 

void SieveOfEratosthenes(ll n,bool *prime) 
{ 
    
  
    for (ll p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        { 
            
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
	
   	
}  
void fun(bool prime[])
{
	ll n;
	cin>>n;
	ll p[n];	
	
	rep(i,0,n){
		cin>>p[i];
	}
	
	int count=0;
	rep(i,0,n)
		rep(j,i+1,n)
		{
			if(p[i]+p[j]!=1&&p[i]+p[j]!=0&&prime[p[i]+p[j]]==1)
			
				count++;
		}
	cout<<count;
	nl
	return;
}
int main()
{
	IOS
	ll t=1;
	cin>>t;
	bool prime[2*1000002];
	memset(prime, true, sizeof(prime)); 
	SieveOfEratosthenes(2*1000000+1,prime);
	while(t--)
		fun(prime);
	return 0;
}