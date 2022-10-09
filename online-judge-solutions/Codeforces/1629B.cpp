//https://codeforces.com/problemset/problem/1629/B
//Lang		:	GNU C++14
//Time		:	779 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,l,r,k;
	for(cin>>t;t--;){
		cin>>l>>r>>k;
		cout<<(r==l?(l==1?"NO":"YES"):(k>=(r-l+1-(r/2-(l-1)/2))?"YES":"NO"))<<"\n";
	}
	return 0;
}
