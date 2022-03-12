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
	string path;
	cin>>path;
	map<int,map<int,int>> m;
	ll mnlen=n+1;
	ll lef=0,rig=0;
	ll pathy=0,pathx=0,pathlen=1;
	m[pathy][pathx]=pathlen;
	rep(i,0,n)
	{
		if(path[i] == 'U')
            pathy++;
        if(path[i] == 'D')
            pathy--;
        if(path[i] == 'R')
            pathx++;
        if(path[i] == 'L')
            pathx--;
        pathlen++;
        if(m[pathy][pathx]) {
            ll len = pathlen - m[pathy][pathx] - 1;
            if(len < mnlen) {
                mnlen = len;
                rig= i + 1;
                lef = rig - len;
            }
            
        }
        m[pathy][pathx] = pathlen;
        
    }
    if(mnlen == n + 1)
     	cout<<-1;
    else
       	cout<<lef<<" "<<rig;
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