//https://codeforces.com/problemset/problem/1621/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,k;
	for(cin>>t;t--;){
		cin>>n>>k;
		string s(n,'.');
		if(k>(n+1)/2) cout<<"-1\n";
		else{
			for(int i=0;i<n;i++){
				string r=s;
				if(i%2==0 && k>0){r[i]='R';k--;}
				cout<<r<<endl;
			}
		}
	}
	return 0;
}
