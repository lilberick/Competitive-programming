//https://codeforces.com/problemset/problem/1620/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	for(cin>>t;t--;){
		string s;
		cin>>s;
		cout<<(count(begin(s),end(s),'N')==1?"NO":"YES")<<"\n";
	}
	return 0;
}
