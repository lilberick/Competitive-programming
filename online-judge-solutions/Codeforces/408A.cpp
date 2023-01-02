//https://codeforces.com/problemset/problem/408/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,x;
	while(cin>>n){
		vector<int> k(n);
		for(int i=0;i<n;i++){cin>>k[i];}
		vector<vector<int>> m;
		for(int i=0;i<k.size();i++){
			vector<int> v;
			for(int j=0;j<k[i];j++){
				cin>>x;v.push_back(x);
			}
			m.push_back(v);
		}
		int r=1000000;
		for(int i=0;i<m.size();i++){
			int s=15*m[i].size();
			for(int j=0;j<m[i].size();j++){
				s+=m[i][j]*5;
			}
			r=min(r,s);
		}
		cout<<r<<endl;
	}
	return 0;
}
