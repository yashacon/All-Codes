#include<iostream>
 using namespace std;
 int main()
{
 	int l=1,r,c;
 	cin>>r>>c;
 	int ans;
 	while (l <= r) {
        int mid = (9*l+r)/10;
        cout<<1<< " "<<mid<<endl;
        int x;
        cin>>x;
        if(x==1)
        {
        	cout<<2<<endl;
        	ans=mid;
        	r = mid - 1;
        }
        else if(x==0)
        {
        	l=mid+1;
        }
        else{
        	cout<<2<<endl;
        }
        	
    }
        cout<<3<<" "<<ans<<endl;
}