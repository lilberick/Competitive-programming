//https://codeforces.com/problemset/problem/47/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		float k=sqrt(2*n+(1.0/4))-(1.0/2);
		cout<<(floor(k)==k?"YES":"NO")<<endl;
	}
	return 0;
}
