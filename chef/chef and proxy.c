#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,d;
	cin>>t;
	
	while(t--)
	{
		cin>>d;
		char s[d];
		int count1=0,count2=0,flag=0;
		for(int i=0;i<d;i++)
		{
			cin>>s[i];
			if(s[i]=='P')
				count1++;
		}
		if(((float)count1/d)>=0.75)
			cout<<0<<endl;
		else
		{
			for(int i=2;i<d-2;i++)
			{
				if(s[i]=='A'&&(s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P'))
					count2++;
					
				if(((float)(count1+count2)/d)>=0.75)
					{
						i=d-2;
						flag=1;
					}
					
			}
			if(flag==1)
				cout<<count2<<endl;
			else
				cout<<-1<<endl;


		}


	}
}