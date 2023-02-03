//https://codeforces.com/problemset/problem/620/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	1000 KB
#include<iostream>
using namespace std;
int main(){
	int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
	cout<<max(abs(x1-x2),abs(y1-y2))<<endl;
	return 0;
}
