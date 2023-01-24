//https://codeforces.com/problemset/problem/599/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
bool f(int a,int b){return (a<b);}
int main(){
	int d1,d2,d3;cin>>d1>>d2>>d3;
	cout<<min(2*min({d1+d2,d1+d3,d2+d3},f),d1+d2+d3)<<endl;
	return 0;
}
