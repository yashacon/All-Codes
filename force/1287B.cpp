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
	int n,k;
    cin>>n>>k;
    vector<string> vec;
    unordered_map<string,int> m;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        vec.pb(s);
        m[s]++;
    }
    int res = 0;
    for(int i=1;i<=n;i++)
    {
        m[vec[i-1]]--;
        for(int j=i+1;j<=n;j++)
        {
            m[vec[j-1]]--;
            string sp;
            for(int l=0;l<k;l++)
            {
                if(vec[i-1][l]!=vec[j-1][l])
                {
                    if(vec[i-1][l]!='S' && vec[j-1][l]!='S') 
                		sp+='S';
                    else if(vec[i-1][l]!='E' && vec[j-1][l]!='E')
                    	sp+='E';
                    else if(vec[i-1][l]!='T' && vec[j-1][l]!='T')
                    	sp+='T';
                }
                else 
                	sp+=vec[i-1][l];
            }
            res+=m[sp];
        }
        for(int j=i+1;j<=n;j++) 
        	m[vec[j-1]]++;
    }
    cout<<res;
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