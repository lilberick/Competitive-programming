//https://codeforces.com/problemset/problem/32/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,d;
	while(cin>>n>>d){
		int r=0;
		vector<int> v(n);
		for(int i=0;i<n;i++){cin>>v[i];}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j && abs(v[i]-v[j])<=d) r++;
			}
		}
		cout<<r<<endl;
	}
	return 0;
}
