//https://codeforces.com/problemset/problem/378/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int a,b,k;
	while(cin>>a>>b){
		int a1=a;
		if(a>b) swap(a,b);
		k=((b-a)-1)/2;
		if(a==b) cout<<"0 6 0"<<endl;
		else if(a1==a) cout<<(a+k)<<" "<<((b-a)%2==0)<<" "<<(7+k-b)<<endl;
		else cout<<(7+k-b)<<" "<<((b-a)%2==0)<<" "<<(a+k)<<endl;
	}
	return 0;
}
