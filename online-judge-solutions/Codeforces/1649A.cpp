//https://codeforces.com/problemset/problem/1649/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,a;
	for(cin>>t;t--;){
		cin>>n;
		vector<int> v(n);
		int l=0,r=0;
		for(int i=0;i<n;i++){cin>>v[i];}
		for(int i=0;i<n;i++){
			if(v[i]==0){l=i-1;break;}
		}
		for(int i=n-1;i>=0;i--){
			if(v[i]==0){r=i+1;break;}
		}
		cout<<r-l<<endl;
	}
	return 0;
}
