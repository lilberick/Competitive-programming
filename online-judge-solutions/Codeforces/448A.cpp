//codeforces.com/problemset/problem/448/A/
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a1,a2,a3,b1,b2,b3,n;
	while(cin>>a1>>a2>>a3>>b1>>b2>>b3>>n){
		cout<<(((ceil((a1+a2+a3)/5)+ceil((b1+b2+b3)/10))>n)?"NO":"YES")<<endl;
	}
	return 0;
}
