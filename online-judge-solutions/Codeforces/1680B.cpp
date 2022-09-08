//https://codeforces.com/problemset/problem/1680/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<vector<char>> v(n,vector<char>(m));
		int imin=6,jmin=6;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>v[i][j];
				if(v[i][j]=='R') imin=min(i,imin),jmin=min(j,jmin);
			}
		}
		cout<<(v[imin][jmin]=='R'?"YES":"NO")<<"\n";
	}
	return 0;
}
