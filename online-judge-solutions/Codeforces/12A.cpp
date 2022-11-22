//https://codeforces.com/problemset/problem/12/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<char>> v(3,vector<char>(3));
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>v[i][j];
		}
	}
	bool b=true;
	for(int i=0;i<3;i++){
		if(v[0][i]!=v[2][2-i]) b=false;
		if(v[i][0]!=v[2-i][2]) b=false;
	}
	cout<<(b?"YES":"NO")<<"\n";
	return 0;
}
