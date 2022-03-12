#include<bits/stdc++.h>
using namespace std;
set <int> s;
set <int> :: iterator itr;
void primeFactors(long long n,long long remain)  
{  
    bool flag=0;
    while (n % 2 == 0)  
    {  
    	if(flag==0 && 2>remain)
        {
        	s.insert(2);
        	flag=1;
        }
        n = n/2;  
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
    	bool flag=0;
        while (n % i == 0)  
        {  
            if(flag==0 && i>remain)
        	{
        		s.insert(i);
        		flag=1;
        	}
            n = n/i;  
        }  
    }  
    if (n > 2 && n>remain)  
       s.insert(n);
} 
long long square(long long n) 
{ 
	if (n==0) return 0; 
	if (n < 0) n = -n;
	long long x = n>>1;
	if (n&1) 
		return ((square(x)<<2) + (x<<2) + 1); 
	else 
		return (square(x)<<2); 
} 
int main()
{
	int t;
	cin>>t;
	while(t--){

		long long check1,remain,a,b;
		char rec[5];
		check1=31630;
		cout<<1<<' '<<check1<<endl;
		fflush(stdout);
		cin>>remain;
		s.clear();
		a=square(check1)-remain;
		primeFactors(a,remain);
		set <int> s1;
		bool flag=0;
		while(s.size()>1){
			cout<<1<<' '<<*prev(s.end())<<endl;
			fflush(stdout);
			cin>>remain;
			if(remain==0)
			{
			    cout<<2<<' '<<*prev(s.end())<<endl;
			    fflush(stdout);
			    flag=1;
			    break;
			}
			b=square(*prev(s.end()));
			long long lele;
			s1.clear();
			for(auto itr=s.begin();itr!=s.end();itr++){
				if(b%(*itr) == remain){
					s1.insert(*itr);
				}
			}
			s.clear();
			s=s1;
		}
		if(!flag){
		cout<<2<<' '<<*s.begin()<<endl;
		fflush(stdout);
		}
		
		cin>>rec;
		if(strcmp(rec,"Yes")==0);
		//else if (strcmp(rec,"No")==0)
		//	return 0;
	}
	return 0;
}