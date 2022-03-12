#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	if (n != 3 || (a[0] != -3 || a[1] != -3 || a[2] != 2)){
        for (int i=0;i<n;i++){
            if (a[i] >= 0) 
            	a[i] = -a[i]-1;
        }
        if (n%2!=0){
            int mx = -1, ind = -1;
            for (int i=0;i < n; i++){
                if (abs(a[i]) > mx){
                    mx = abs(a[i]);
                    ind = i;
                }
            }
            a[ind] = -a[ind]-1;
        }
    }
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}

