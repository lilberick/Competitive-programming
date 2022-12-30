//https://codeforces.com/problemset/problem/412/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
		int a[n];
		for(int i=0;i<n;i++){cin>>a[i];}
		sort(a,a+n,greater<int>());
		cout<<a[k-1]<<endl;
	}
	return 0;
}
