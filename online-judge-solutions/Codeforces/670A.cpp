//https://codeforces.com/problemset/problem/670/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int minimo=2*(n/7)+(n%7==6);
	int maximo=2*(n/7)+(n%7==1?1:(n%7>1?2:0));
	cout<<minimo<<" "<<maximo<<endl;
	return 0;
}
