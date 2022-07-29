//https://codeforces.com/problemset/problem/1515/B
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
using namespace std;
bool EsCuad(int x){
  int y=sqrt(x);
  return y*y==x;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int n2=n/2;
		if((EsCuad(n) || EsCuad(n/2)) && n%2==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
