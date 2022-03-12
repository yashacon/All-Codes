#include<bits/stdc++.h>
using namespace std;
#define     REP(i, a, b) for(int i = a; i <= b; i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        string s[r];
        REP(i,0,r-1)
            cin>>s[i];
        int ans[r][c];
        memset(ans,0,sizeof ans);
        REP(i,0,r-1)
        {
            REP(j,0,c-1)
            {
                if(s[i][j]!='#')
                {
                    int k=1,l=1;
                    bool cond1,cond2,cond3,cond4;
                    cond1=cond2=cond3=cond4=1;
                    while(k < c || l < r)
                    {
                        int cnt = 0;
                        if(i-l>=0 && s[i-l][j]=='D' && cond1)
                            cnt++;
                        else if(i-l>=0 && s[i-l][j]=='#')
                            cond1=0;
                        if(i+l < r && s[i+l][j]=='U' && cond2)
                            cnt++;
                        else if(i+l < r && s[i+l][j]=='#' && cond2)
                            cond2=0;
                        if(j-k>=0 && s[i][j-k]=='R' && cond3)
                            cnt++;
                        else if(j-k>=0 && s[i][j-k]=='#' && cond3)
                            cond3=0;
                        if(j+k < c && s[i][j+k]=='L' && cond4)
                            cnt++;
                        else if(j+k < c && s[i][j+k]=='#' && cond4)
                            cond4=0;
                        if(cnt==2)
                            ans[i][j]+=1;
                        if(cnt==3)
                            ans[i][j]+=3;
                        if(cnt==4)
                            ans[i][j]+=6;
                        k++;
                        l++;
                    }       

                }
            }
        }
        int final = 0;
        REP(i,0,r-1)
        {
            REP(j,0,c-1)
                final+=ans[i][j];
        }
        cout<<final<<endl;
    }
    return 0;
}