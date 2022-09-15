//https://codeforces.com/problemset/problem/1729/B
//Lang		:	GNU C++14
//Time		:	109 ms
//Memory	:	100 KB
#include<iostream>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		string s,r;
		cin>>n>>s;
		while(s.size()){
			if(s.back()=='0'){
				r=char(stoi(string(1,s[s.size()-3])+string(1,s[s.size()-2]))+96)+r;
				s.pop_back();s.pop_back();s.pop_back();
			}else{
				r=char(stoi(string(1,s[s.size()-1]))+96)+r;
				s.pop_back();
			}
		}
		cout<<r<<endl;
	}
	return 0;
}
