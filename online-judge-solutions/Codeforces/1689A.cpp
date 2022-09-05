//https://codeforces.com/problemset/problem/1689/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,m,k,ma,mb;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		string a,b,c; cin>>a>>b;
		sort(begin(a),end(a),greater<char>());
		sort(begin(b),end(b),greater<char>());
		ma=0;mb=0;
		while(a.size()>0 && b.size()>0){
			bool g=a.back()<b.back();
			if(g && ma==k) g=0;
			if(!g && mb==k) g=1;
			if(g) c+=a.back(),ma++,mb=0,a.pop_back();
			else c+=b.back(),mb++,ma=0,b.pop_back();
		}
		cout<<c<<endl;
	}
	return 0;
}
