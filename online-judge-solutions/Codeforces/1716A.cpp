//https://codeforces.com/problemset/problem/1716/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<((n==1)?2:((n==2)||n==3?1:int(ceil(n/3.0))))<<"\n";
	}
	return 0;
}
