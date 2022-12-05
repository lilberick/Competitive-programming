//https://codeforces.com/problemset/problem/169/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,a,b;
	while(cin>>n>>a>>b){
		vector<int> v(n);
		for(int i=0;i<n;i++){cin>>v[i];}
		sort(begin(v),end(v));
		cout<<v[b]-v[b-1]<<endl;
	}
	return 0;
}
