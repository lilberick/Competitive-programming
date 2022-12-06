//https://codeforces.com/problemset/problem/181/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int coordenada(vector<int> &v){
	int z;
	for(int i=0;i<v.size();i++) if(count(begin(v),end(v),v[i])==1){
		z=v[i];break;
	}
	return z+1;
}
int main(){
	vector<int> x,y;
	char c;
	int n,m,a,b;
	while(cin>>n>>m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>c;
				if(c=='*'){
					x.push_back(i);
					y.push_back(j);
				}
			}
		}
		a=coordenada(x);
		b=coordenada(y);
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
