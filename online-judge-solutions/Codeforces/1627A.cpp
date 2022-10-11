//https://codeforces.com/problemset/problem/1627/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,m,r,c;
	for(cin>>t;t--;){
		cin>>n>>m>>r>>c;
		bool y=false,x=false,b=false;
		vector<vector<char>>v(n,vector<char>(m));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>v[i][j];
				if(v[i][j]=='B'){
					b=true;
					if(i+1==r) y=true;
					if(j+1==c) x=true;
				}
			}
		}
		if(!b) cout<<"-1\n";
		else{
			if(v[r-1][c-1]=='B') cout<<"0\n";
			else cout<<((x || y)?"1":"2")<<"\n";
		}
	}
	return 0;
}
