//https://codeforces.com/problemset/problem/1728/B
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<max_element(a,a+n)-a+1<<endl;
	}
	return 0;
}
