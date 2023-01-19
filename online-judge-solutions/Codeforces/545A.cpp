//https://codeforces.com/problemset/problem/545/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;cin>>n;
	vector<vector<int>> v(n,vector<int>(n));
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>v[i][j];
	vector<int> w;
	for(int i=0;i<n;i++){
		bool b=true;
		for(int j=0;j<n;j++) if(v[i][j]==1 || v[i][j]==3) b=false;
		if(b) w.push_back(i);
	}
	cout<<w.size()<<endl;
	for(int i:w) cout<<i+1<<" ";
	return 0;
}
