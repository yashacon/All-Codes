#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	long int k;
    	cin>>n>>k;
    	long int a[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	sort(a,a+n);
    	long int high_min=a[n-1]-k;
    	long int high_max=a[n-1]+k;
    	long int low_max=a[0]+k;
    	long int ans=0;
    	if(a[0]==a[n-1])
    		ans=a[n-1]+k;
    	else if(low_max >= high_max)
    		ans=high_max;
    	else if(low_max<high_min)
    		ans=-1;
    	else if(low_max>=high_min)
    		ans=low_max;
    	cout<<ans<<endl;

    }
    return 0;
}