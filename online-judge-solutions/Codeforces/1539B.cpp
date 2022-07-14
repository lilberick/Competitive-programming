//https://codeforces.com/problemset/problem/1539/B
//Lang		:	GNU C++14
//Time		:	530 ms
//Memory	:	1200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,q,l,r;
	while(cin>>n>>q){
		string s;
		cin>>s;
		vector<int> v;
		int suma=0;
		for(char x:s){
			suma+=x-96;
			v.push_back(suma);
		}
		v[-1]=0;
		while(q--){
			cin>>l>>r;
			cout<<v[r-1]-v[l-2]<<endl;
		}
	}
	return 0;
}
