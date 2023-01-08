//https://codeforces.com/problemset/problem/440/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	400 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int n;cin>>n;
	vector<int> a(n,1000000);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(begin(a),end(a));
	for(int i=0;i<n;i++) if(a[i]!=i+1) {cout<<i+1<<endl;break;}
	return 0;
}
