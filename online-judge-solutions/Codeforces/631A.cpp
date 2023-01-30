//https://codeforces.com/problemset/problem/631/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	int sa=a[0],sb=b[0];
	for(int i=0;i<n;i++){
		sa|=a[i];
		sb|=b[i];
	}
	cout<<sa+sb<<endl;
	return 0;
}
