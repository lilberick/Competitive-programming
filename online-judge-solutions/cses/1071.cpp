//https://cses.fi/problemset/task/1071
//Lang		:	C++11
//Time		:	0.25 s
//Memory	:	180 ch. 
#include<iostream>
using namespace std;
int main(){
	long long t,y,x,n;
	cin>>t;
	while(t--){
		cin>>y>>x;
		n=y<x?x%2==1?x*x-y+1:(x-1)*(x-1)+y:n=y%2==0?y*y-x+1:(y-1)*(y-1)+x;
		cout<<n<<endl;
	}
	return 0;
}
