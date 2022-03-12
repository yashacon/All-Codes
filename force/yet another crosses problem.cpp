#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
typedef vector<int64_t> vi;
typedef pair< int64_t,int64_t> ii;
typedef vector<pair<int64_t, int64_t> > vp;
typedef vector<pair<int64_t, ii> > vpp;
#define mp make_pair
#define f first
#define s second
#define pb push_back
#define INF 1e9
#define SIZE 200001
#define mod 1000000007
#define int int64_t
void solve();
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
void solve()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        vp row,col;
        char mat[n+1][m+1];
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='.')
                    count++;
            }
            col.pb(ii(count,i));
        }
        for(int i=0;i<m;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(mat[j][i]=='.')
                    count++;
            }
            row.pb(ii(count,i));
        }
        sort(row.begin(),row.end());
        sort(col.begin(),col.end());
        int ans=1e9;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int toko=row[j].f;
                
                toko+=col[i].f;
     
                if(mat[col[i].s][row[j].s]=='.')
                {
                    toko-=1;
                }
                ans=min(ans,toko);
            }
        }
        cout<<ans<<"\n";
    }
}
