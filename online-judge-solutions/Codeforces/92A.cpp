//https://codeforces.com/problemset/problem/92/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		int j=1;
		while(m>=j){
			m-=j;
			j++;
			if(j>n) j=1;
		}
		cout<<m<<endl;
	}
	return 0;
}
