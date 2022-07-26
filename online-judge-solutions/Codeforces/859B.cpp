//https://codeforces.com/problemset/problem/859/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int a=1;
		while(n>(a*(a+1))){a++;}
		int b=sqrt(n);
		if(b*b<n) b++;
		int con=a*(a+1);
		int cua=b*b;
		cout<<((con-n<cua-n)?(2*(a+a+1)):(4*b))<<"\n";
	}
	return 0;
}
