//https://codeforces.com/problemset/problem/1722/C
//Lang		:	GNU C++14
//Time		:	156 ms
//Memory	:	400 KB
#include<iostream>
#include<vector>
#include<map>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,p;
	cin>>t;
	while(t--){
		string x;
		cin>>n;p=n*3;
		vector<vector<string>> v(3,vector<string>(n));
		map<string,int> m;
		for(int i=0;i<p;i++){
			cin>>x;m[x]++;
			v[i/n][i%n]=x;
		}
		vector<int> r(3,0);
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++){
				r[i]+=(m[v[i][j]]==1?3:(m[v[i][j]]==2?1:0));
			}
		}
		for(int z:r){cout<<z<<" ";}cout<<endl;
	}
	return 0;
}
