//https://codeforces.com/problemset/problem/1647/A
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
		string r;
		if(n%3==1){
			int k=(n-1)/3,k1=k+1,k2=k;
			while(k1 || k2){
				if(k1>0){r+="1";k1--;}
				if(k2>0){r+="2";k2--;}
			}
		}else if(n%3==2){
			int k=(n-2)/3,k1=k,k2=k+1;
			while(k1 || k2){
				if(k2>0){r+="2";k2--;}
				if(k1>0){r+="1";k1--;}
			}
		}else{
			int k=n/3,k1=k,k2=k;
			while(k1 || k2){
				if(k2>0){r+="2";k2--;}
				if(k1>0){r+="1";k1--;}
			}
		}
		cout<<r<<endl;
	}
	return 0;
}
