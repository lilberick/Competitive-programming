//https://codeforces.com/problemset/problem/306/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m,t;
	while(cin>>n>>m){
		vector<int> v(m,n/m);
		int r=n%m;
		for(int i=0;i<r;i++){v[m-i-1]++;}
		for(int i=0;i<m;i++){cout<<v[i]<<" ";}cout<<endl;
	}
	return 0;
}
