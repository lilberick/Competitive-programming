//https://codeforces.com/problemset/problem/172/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	2100 KB
#include<iostream>
#include<vector>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int n;
	while(cin>>n){
		vector<string> v(n);
		for(int i=0;i<n;i++){cin>>v[i];}
		int m=v[0].size(),x;
		bool t=true;
		for(int i=0;i<m && t;i++){
			for(int j=1;j<n && t;j++){
				if(v[j][i]!=v[0][i]){x=i;t=false;}
			}
		}
		cout<<x<<endl;
	}
	return 0;
}
