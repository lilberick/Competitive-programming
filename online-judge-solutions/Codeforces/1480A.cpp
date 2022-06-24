//https://codeforces.com/problemset/problem/1480/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
char cp(char c){
	if(c=='a') return 'b';
	return 'a';
}
char ci(char c){
	if(c=='z') return 'y';
	return 'z';
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(i%2==0) cout<<cp(s[i]);
			else cout<<ci(s[i]);
		}cout<<endl;
	}
	return 0;
}
