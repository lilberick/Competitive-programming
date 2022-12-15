//https://codeforces.com/problemset/problem/299/B
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int n,k;
	char c;
	while(cin>>n>>k){
		int r=0;
		bool b=true;
		for(int i=0;i<n && b;i++){
			cin>>c;
			(c=='#')?r++:r=0;
			if(r==k) b=false;
		}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
