#include<bits/stdc++.h>
using namespace std;
int computePositiveSize(long profit[],int sz)
{
    for(int i = 0; i < sz; i++) {
        if(profit[i] < 0) return i;
    }
    return sz;
}
long totprr(long p[],int sz)
{
	long sum=0;
	for(int i=0;i<sz;i++)
		sum+=p[i];
	return sum;
}
int main()
{
	int t;
	int n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n],sum_init=0,x,p[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum_init+=a[i];
		}
		cin>>k>>x;
		for(int i=0;i<n;i++)
		{
		    long xo=a[i]^x;
			p[i]=(xo-a[i]);
		}
		sort(p,p+n,greater<long>());
		if(k==n)
		{
			cout<<max(sum_init,sum_init+totprr(p,n))<<endl;
			//continue;
		}
		else{int positiveSize = computePositiveSize(p,n);
		if(positiveSize % 2 == 0 || (k & 1))
		{
			cout<<max(sum_init,sum_init+totprr(p,positiveSize))<<endl;
		}
		else {
            long long extraProfit = 0;
            for(int i = 0; i < positiveSize - 1; i++) 
            	extraProfit += p[i];
            
            //by now there will be one positive element left
            long long takeOneLeft = 0;
            if(positiveSize < n && positiveSize - 1 >= 0) {
                takeOneLeft += (p[positiveSize] + p[positiveSize - 1]); 
            }
            cout << max(sum_init + extraProfit, sum_init + extraProfit + takeOneLeft) << endl;
        }}
	}
	return 0;
}