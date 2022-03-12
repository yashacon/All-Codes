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
#define N 300009


 
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
	ll n;
    cin>>n;
    map<char,bool> mp;
    string s;
    cin>>s;
    for(auto x:s){
        mp[x]=1;
    }
    for(char o='a';o<='z';o++)
        if(!mp.count(o))
        {
            cout<<o;
            nl
            return;
        }
    set<string> st;
    string cpy=s.substr(0,2);
    st.insert(cpy);
    rep(i,2,n){
        cpy+=s[i];
        cpy.erase(cpy.begin()+0);
        st.insert(cpy);
    }
    for(char i='a';i<='z';i++){
        string match;
        match+=i;
        for(char j='a';j<='z';j++)
        {
            string form=match+j;
            if(st.find(form)==st.end())
            {
                cout<<form;
                nl
                return;
            }
        }
    }
    cpy=s.substr(0,3);
    st.clear();
    st.insert(cpy);
    rep(i,3,n){
        cpy+=s[i];
        cpy.erase(cpy.begin()+0);
        st.insert(cpy);
    }
    for(char k='a';k<='z';k++){
        string first;
        first+=k;
        for(char i='a';i<='z';i++){
            string match=first+i;
            for(char j='a';j<='z';j++)
            {
                string form=match+j;
                if(st.find(form)==st.end())
                {
                    cout<<form;
                    nl
                    return;
                }
            }
        }
    }
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