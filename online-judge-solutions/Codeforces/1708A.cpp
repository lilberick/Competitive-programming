//https://codeforces.com/problemset/problem/1708/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		bool b=true;
		int v[n];
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(i>0 && v[i]%v[0]!=0){b=false;}
		}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
