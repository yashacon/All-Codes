#include<bits/stdc++.h>
using namespace std; 
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	long m1[2]={0},m2[3]={0};
	for(long i=0;i<s1.length();i++)
		if(s1[i]=='+')
			m1[0]++;
		else if(s1[i]=='-')
			m1[1]++;
	for(long i=0;i<s2.length();i++)
		if(s2[i]=='+')
			m2[0]++;
		else if(s2[i]=='-')
			m2[1]++;
		else if(s2[i]=='?')
			m2[2]++;	
//cout<<m1[0]<<m1[1]<<m2[0]<<m2[1]<<m2[2];
if(s1.length()==s2.length())
{
	if(m1[0]>=m2[0] && m1[1]>=m2[1])
	{
		long till=min((m1[1]-m2[1]),(m1[0]-m2[0]));
		double long ans1=1,ans2=1;
		for(long i=0;i<till;i++){
			ans1*=m2[2]-i;
			ans2*=till-i;
		}
		
		ans1/=ans2;
		double long divi=(1<<m2[2]);
		float z=(float)ans1/(float)divi;
		cout<< fixed << setprecision(12) <<z<<"\n";
	}
	else{
		float ans=0;
		cout<< fixed << setprecision(12) <<ans<<"\n";
	}
}
else{
		float ans=0;
		cout<< fixed << setprecision(12) <<ans<<"\n";
}

	return 0;
}