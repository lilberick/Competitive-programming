//https://codeforces.com/problemset/problem/1678/B1
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	500 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		string s,r;
		cin>>n>>s;
		int w=0;
		for(int i=1;i<n;i+=2){
			if(s[i]!=s[i-1]) w++;
		}
		cout<<w<<endl;
	}
	return 0;
}
