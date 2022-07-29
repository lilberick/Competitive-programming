//https://codeforces.com/problemset/problem/1085/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		string w;
		int t=0;
		while(s.size()>0){
			int n=s.size();
			int i=(t%2==0?(n-1):n)/2;
			w+=s[i];
			s.erase(i,1);
			t++;
		}
		cout<<w<<endl;
	}
	return 0;
}
