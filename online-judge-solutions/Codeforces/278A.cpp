//https://codeforces.com/problemset/problem/278/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,s,t;
	while(cin>>n){
		int d[n];
		int todo=0,suma=0;
		for(int i=0;i<n;i++){cin>>d[i];todo+=d[i];}
		cin>>s>>t;if(s>t) swap(s,t);
		for(int i=s-1;i<t-1;i++) suma+=d[i];
		cout<<min(suma,todo-suma)<<endl;
	}
	return 0;
}
