//https://codeforces.com/problemset/problem/376/A
//Lang		:	GNU C++14
//Time		:	156 ms
//Memory	:	2900 KB
#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		long long r=0,m=s.find('^');
		for(int i=0;i<s.size();i++){
			r+=(s[i]-'0'>=1 && s[i]-'0'<=9)?((s[i]-'0')*(i-m)):0;
		}
		cout<<(r<0?"left":(r==0?"balance":"right"))<<endl;
	}
	return 0;
}
