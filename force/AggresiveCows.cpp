#include<bits/stdc++.h>
using namespace std;
#define i64t long long int 
void fi(i64t array[],i64t l,i64t h,i64t cow,i64t g)
{
	int maxi=-1;
	while(l<=h)
	{
	    i64t pos=array[0];
		i64t i,v=1, mid=l+(h-l)/2;
		for(i=1;i<g;i++)
		if((array[i]-pos)>=mid){
		    pos=array[i];
		    v++;
		}
		if(v>=cow){
			l=mid+1;
			maxi=mid;
		}
		else if(v<cow)
			h=mid-1;
		//cout<<mid<<l<<h<<endl;
	}
	cout<<maxi<<endl;
}
int main(){
	std::ios::sync_with_stdio(false);
	int t;
	i64t n,c;
	cin>>t;
	while(t--){
		cin>>n>>c;
		i64t a[100009],low,high;
		for(i64t i=0;i<n;i++)
		{
			cin>>a[i];

		}
		sort(a,a+n);
		low=1;
		high=a[n-1]-a[0];
		fi(a,low,high,c,n);
	}
}