//https://codeforces.com/problemset/problem/1617/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	100 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int x;
	cin>>x;
	while(x--){
		string s,t;
		cin>>s>>t;
		sort(s.begin(),s.end());
		string r=s;
		r.erase(unique(r.begin(),r.end()),r.end());
		if(!(r.find(t)<r.size())) cout<<s<<endl;
		else{
			int n=count(s.begin(),s.end(),'c');
			string c(n,'c');
			s.erase(remove(s.begin(),s.end(),'c'),s.end());
			s.insert(s.find('b'),c);
			cout<<s<<endl;
		}
	}
	return 0;
}
