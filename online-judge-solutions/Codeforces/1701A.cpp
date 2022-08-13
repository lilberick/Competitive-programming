//https://codeforces.com/problemset/problem/1701/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,x;
	cin>>t;
	while(t--){
		int n=4,s=0;
		while(n--){
			cin>>x;
			if(x==1) s++;
		}
		cout<<(s==0?"0":(s==4?"2":"1"))<<"\n";
	}
	return 0;
}
