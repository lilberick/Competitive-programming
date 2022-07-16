//https://codeforces.com/problemset/problem/1654/B
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	700 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> m;
		for(char x:s){m[x]++;}
		bool sigue=true;
		for(int i=0;i<s.size() && sigue;i++){
			if(--m[s[i]]==0){
				cout<<s.substr(i)<<endl;
				sigue=false;
			}
		}
	}
	return 0;
}
