//https://codeforces.com/problemset/problem/1747/B
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		cout<<(n+1)/2<<endl;
		for(int i=1;i<=(n+1)/2;i++){
			cout<<i*3-2<<" "<<3*n-((i-1)*3)<<endl;
		}
	}
	return 0;
}
