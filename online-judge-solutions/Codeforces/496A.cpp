//https://codeforces.com/problemset/problem/496/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,s=10000;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	for(int i=1;i<n-1;i++){
		vector<int> w=v;
		w.erase(w.begin()+i);
		int m=0;
		for(int i=0;i<w.size()-1;i++) m=max(m,w[i+1]-w[i]);
		s=min(s,m);
	}
	cout<<s<<endl;
	return 0;
}
