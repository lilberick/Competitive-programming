//https://codeforces.com/problemset/problem/501/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x=max((3*a)/10,a-(a/250)*c);
	int y=max((3*b)/10,b-(b/250)*d);
	cout<<(x>y?"Misha":(x==y?"Tie":"Vasya"))<<endl;
	return 0;
}
