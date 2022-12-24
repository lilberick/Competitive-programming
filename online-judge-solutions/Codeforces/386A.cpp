//https://codeforces.com/problemset/problem/386/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,p;
	while(cin>>n){
		map<int,int> m;
		for(int i=0;i<n;i++){cin>>p;m[p]=i;}
		cout<<(m.rbegin()->second)+1<<" "<<next(m.begin(),n-2)->first<<endl;
	}
	return 0;
}
