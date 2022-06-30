//https://codeforces.com/problemset/problem/1684/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,r;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int m=*min_element(s.begin(),s.end());
		int n=s.size();
		if(n==1) r=s[0]-48;
		else if(n==2) r=s[1]-48;
		else r=m-48;
		cout<<r<<endl;
	}
	return 0;
}
