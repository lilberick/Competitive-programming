//https://codeforces.com/problemset/problem/421/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int n,a,b,x;
	while(cin>>n>>a>>b){
		vector<int> v(a),w(b);
		map<int,int> m;
		for(int i=0;i<a;i++){cin>>v[i];}
		for(int i=0;i<b;i++){
			cin>>w[i];
			m[w[i]]=2;
		}
		for(int i=0;i<a;i++){m[v[i]]=1;}
		for(auto i=m.begin();i!=m.end();i++){
			cout<<i->second<<" ";
		}cout<<endl;
	}
	return 0;
}
