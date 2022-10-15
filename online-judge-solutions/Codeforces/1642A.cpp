//https://codeforces.com/problemset/problem/1642/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	for(cin>>t;t--;){
		vector<pair<int,int>>v(3);
		int mx=0;
		for(int i=0;i<3;i++){cin>>v[i].first>>v[i].second;mx=max(mx,v[i].second);}
		int d=0;
		bool f=false;
		for(int i=0;i<3 && f==false;i++){
			for(int j=0;j<3 && f==false;j++){
				if(i!=j && v[i].second==v[j].second && v[i].second==mx){
					d=abs(v[i].first-v[j].first);
					f=true;
				}
			}
		}
		cout<<d<<"\n";
	}
	return 0;
}
