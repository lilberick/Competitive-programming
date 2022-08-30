//https://codeforces.com/problemset/problem/1721/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	char x;
	cin>>t;
	while(t--){
		int a=4;
		set<int>s;
		while(a--){cin>>x;s.insert(x);}
		cout<<s.size()-1<<endl;
	}
	return 0;
}
