//https://codeforces.com/problemset/problem/1656/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	3200 KB
#include<iostream>
#include<map>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>x;
			m[x]=i+1;
		}
		cout<<m.begin()->second<<" "<<m.rbegin()->second<<endl;
	}
	return 0;
}
