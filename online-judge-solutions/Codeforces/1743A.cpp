//https://codeforces.com/problemset/problem/1743/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,n,x;
	for(cin>>t;t--;){
		cin>>n;
		for(int i=0;i<n;i++){cin>>x;}
		int c=tgamma(11-n)/(tgamma(9-n)*tgamma(3));
		cout<<c*6<<endl;
	}
	return 0;
}
