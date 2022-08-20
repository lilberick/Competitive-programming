//https://codeforces.com/problemset/problem/1695/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<vector<int> > v(n,vector<int>(m));
		int z=-1000000000,x=0,y=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>v[i][j];
				if(v[i][j]>z){
					z=v[i][j];
					y=i,x=j;
				}
			}
		}
		y++;x++;
		cout<<max(y,n-y+1)*max(x,m-x+1)<<endl;
	}
	return 0;
}
