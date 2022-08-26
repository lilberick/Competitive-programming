//https://codeforces.com/problemset/problem/1712/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	400 KB
#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		iota(begin(v),end(v),1);
		for(int i=n-1;i>0;i-=2){
			swap(v[i],v[i-1]);
		}
		for(int x:v){cout<<x<<" ";}cout<<endl;
	}
	return 0;
}
