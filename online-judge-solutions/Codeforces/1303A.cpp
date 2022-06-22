//https://codeforces.com/problemset/problem/1303/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.find('1');
		int r=s.rfind('1');
		int c=count(s.begin(),s.end(),'1');
		c==0 ? cout<<"0\n":cout<<(r-l+1)-c<<"\n";
	}
	return 0;
}
