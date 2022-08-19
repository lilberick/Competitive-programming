//https://codeforces.com/problemset/problem/1696/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,z,n;
	cin>>t;
	while(t--){
		cin>>n>>z;
		vector<int> v(n);
		int s=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			s=max(v[i]|z,s);
		}
		cout<<s<<endl;
	}
	return 0;
}
