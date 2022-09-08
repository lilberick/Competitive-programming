//https://codeforces.com/problemset/problem/1675/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,a,b,c,x,y;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>x>>y;
		cout<<((((a-x)*(a<x)+(b-y)*(b<y)+c)>=0)?"YES":"NO")<<"\n";
	}
	return 0;
}
