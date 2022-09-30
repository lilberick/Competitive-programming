//https://codeforces.com/problemset/problem/1739/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	for(cin>>t;t--;){
		cin>>n>>m;
		if(n<=3 || m<=3) cout<<(n+1)/2<<" "<<(m+1)/2<<endl;
		else cout<<n<<" "<<m<<endl;
	}
	return 0;
}
