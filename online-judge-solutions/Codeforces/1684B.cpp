//https://codeforces.com/problemset/problem/1684/B
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,x,y,z;
	cin>>t;
	while(t--){
		vector<int> v(3);
		for(int i=0;i<3;i++){cin>>v[i];}
		sort(begin(v),end(v));
		z=v[2];
		y=z+v[1];
		x=y+v[0];
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	return 0;
}
