//https://codeforces.com/problemset/problem/330/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int R,C,r=0,c=0;
	cin>>R>>C;
	vector<vector<char>> v(R,vector<char>(C));
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){cin>>v[i][j];}
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(v[i][j]=='S'){r++;break;}
		}
	}
	for(int i=0;i<C;i++){
		for(int j=0;j<R;j++){
			if(v[j][i]=='S'){c++;break;}
		}
	}
	cout<<R*C-r*c<<endl;
	return 0;
}
