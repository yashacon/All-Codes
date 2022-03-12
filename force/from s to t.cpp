#include <bits/stdc++.h>

using namespace std;

string t,p,s;
int q;
multiset<char> ms;


int main(){
	cin >> q;
	while(q--){
		cin >> s >> t >> p;
		for(int i = 0 ; i < p.size();i++)
		{
			ms.insert(p[i]);
		}
		int j = 0;
		bool no = false;
		for(int i = 0 ; i < t.size();i++){
			if(j >= s.size() || t[i] != s[j]){
				if(ms.count(t[i]))
					ms.erase(ms.find(t[i]));
				else
				{
					no = true;
					break;
				}
			}
			else
				j++;
		}
		if(no || j != s.size())
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		ms.clear();
	}
	return 0;
}