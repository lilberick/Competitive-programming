//https://codeforces.com/problemset/problem/14/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,m;
	while(cin>>n>>m){
		vector<vector<char>>v(n,vector<char>(m));
		int xmin=51,ymin=51,xmax=0,ymax=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>v[i][j];
				if(v[i][j]=='*'){
					xmin=min(xmin,i);
					ymin=min(ymin,j);
					xmax=max(xmax,i);
					ymax=max(ymax,j);
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i>=xmin && j>=ymin && i<=xmax && j<=ymax){
					cout<<v[i][j];
					if(j==ymax) cout<<endl;
				}
			}
		}
	}
	return 0;
}
