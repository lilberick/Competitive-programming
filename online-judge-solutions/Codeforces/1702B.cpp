//https://codeforces.com/problemset/problem/1702/B
//Lang		:	GNU C++14
//Time		:	78 ms
//Memory	:	500 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		set<char> e;
		int r=0;
		for(char x:s){
			e.insert(x);
			if(e.size()==4){
				e.erase(e.begin(),e.end());
				e.insert(x);r++;
			}
		}
		cout<<r+(e.size()>0)<<endl;
	}
	return 0;
}
