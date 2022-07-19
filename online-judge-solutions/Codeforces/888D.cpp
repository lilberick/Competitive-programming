//https://codeforces.com/problemset/problem/888/D
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
			if(k==1) cout<<"1\n";
			else if(k==2) cout<<((n*(n-1))/2)+1<<endl;
			else if(k==3){
					n=n-2;
					int r=2+4*n+5*((n*(n-1))/2)+(2*n*(n-1)*(n-2))/6;
					cout<<r<<endl;
			}else if(k==4){
					long long x=n-3;
					long long r=6+18*x+(34*x*(x-1))/2+29*(x*(x-1)*(x-2))/6+(9*x*(x-1)*(x-2)*(x-3))/24;
					cout<<r<<endl;
			}
	}
	return 0;
}
