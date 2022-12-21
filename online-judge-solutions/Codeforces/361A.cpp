//https://codeforces.com/problemset/problem/361/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<((i==j)?k:0)<<" ";
			}cout<<endl;
		}
	}
	return 0;
}
