#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int q;
	cin>>q;
	while(q--)
	{
		int n,k;

		cin>>n>>k;

		long a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int count=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]&1)
			{
				count++;
				a[i]=1;
			}
			else
				a[i]=0;
		}
		if(count>=k && count%2==k%2)
		{
			cout<<"YES\n";
			for (int j = 1; j <= n; ++j) {
				if (k == 1) 
					break;
				if (a[j]) {
					cout << j << " ";
					k--;
				}
			}
		
			cout << n << endl;
		}
		else
			cout<<"NO\n";
	}
}