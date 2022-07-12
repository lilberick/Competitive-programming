//https://codeforces.com/problemset/problem/1547/B
//Lang		:	GNU C++14
//Time		:	124 ms
//Memory	:	200 KB
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> m;
		for(int i=0;i<s.size();i++){
			m[s[i]]=i;
		}
		vector<int> v;
		vector<char> w;
		int yes=0;
		if(s.size()!=m.size() || m.find('a')->first!='a') cout<<"NO\n";
		else{
			tr(m,i){
				w.push_back(i->first);
				v.push_back(i->second);
				sort(v.begin(),v.end());
				sort(w.begin(),w.end());
				if(v[v.size()-1]-v[0]+1!=v.size()) yes++;
				if(w[w.size()-1]-w[0]+1!=w.size()) yes++;
			}
			if(yes==0) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}
