//https://cses.fi/problemset/task/1070
//Lang		:	GNU C++11
//Time		:	0.12 s
//Memory	:	215 ch.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;cin>>n;
	if(n>1 && n<=3) cout<<"NO SOLUTION\n";
	else{
		for(int i=1;i<=n/2;i++) cout<<i*2<<" ";
		for(int i=0;i<ceil(n/2.0);i++) cout<<i*2+1<<" ";cout<<endl;
	}
	return 0;
}
