//https://codeforces.com/problemset/problem/1146/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;
	int x=count(s.begin(),s.end(),'a');
	int n=s.size();
	cout<<min(n,2*x-1)<<endl;
	return 0;
}
