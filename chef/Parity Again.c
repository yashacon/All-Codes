#include<bits/stdc++.h>
using namespace std;
bool getParity(unsigned int n) 
{ 
    bool parity = 0; 
    while (n) 
    { 
        parity = !parity; 
        n     = n & (n - 1); 
    }      
    return parity; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int q,x;
        cin>>q;
        set <int, greater<int>> s;
        set<int,greater<int> > :: iterator itr;

        unsigned long long E=0,O=0;
        while(q--)
        {
            cin>>x;
            if (s.find(x)==s.end())
            {
                for (itr = s.begin(); itr != s.end(); ++itr) 
                    s.insert(x^(*itr));
                    s.insert(x);
                if(getParity(x)==1)
                {
                    unsigned long long c=O;
                    O=E+O+1;
                    E=E+c;
                 }
                else if(__builtin_popcount(x)!=0)
                {
                    E=2*E+1;
                    O=2*O;
                }
                /*for (itr = s.begin(); itr != s.end(); ++itr) 
                { 
                   cout<<*itr<<" ";

                } 
                cout<<endl;*/
            }  
                cout<<E<<" "<<O<<endl;
        }
    }
    return 0;
}