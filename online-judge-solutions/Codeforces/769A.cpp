//https://codeforces.com/problemset/problem/769/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int n,r;cin>>n;
	set<int> a;
	for(int i=0;i<n;i++){cin>>r;a.insert(r);}
	cout<<*next(begin(a),n/2)<<endl;
	return 0;
}
