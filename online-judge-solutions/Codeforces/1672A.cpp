//https://codeforces.com/problemset/problem/1672/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int g=0,a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0) g++;
		}
		cout<<(g%2!=0?"errorgorn":"maomao90")<<"\n";
	}
	return 0;
}
