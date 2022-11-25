//https://codeforces.com/problemset/problem/46/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int t=1;
		for(int i=1;i<n;i++){
			t+=i;
			cout<<(t%n==0?n:t%n)<<" ";
		}cout<<endl;
	}
	return 0;
}
