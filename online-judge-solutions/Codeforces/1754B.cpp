//https://codeforces.com/problemset/problem/1754/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		vector<int> v(n),a,b;
		for(int i=1;i<=n;i++){
			if(i<=n/2) a.push_back(i);
			else b.push_back(i);
		}
		for(int i=0;i<((n+1)/2);i++){
			if(i<b.size() && b[i]<=n && b[i]>0) cout<<b[i]<<" ";
			if(i<a.size() && a[i]<=n && a[i]>0) cout<<a[i]<<" ";
		}cout<<endl;
	}
	return 0;
}
