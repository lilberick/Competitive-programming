//https://cses.fi/problemset/task/1068
//Lang		:	GNU C++11
//Time		:	0 ms
//Memory	:	179 ch. 
#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long n;
	cin>>n;
	vector<long long> v={n};
	while(n!=1){v.push_back(n=n%2==0?n/2:3*n+1);}
	for(auto i:v) cout<<i<<" ";
	return 0;
}
