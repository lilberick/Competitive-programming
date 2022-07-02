//https://codeforces.com/problemset/problem/1216/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	500 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int d=0;
		string s;
		cin>>s;
		string r=s;
		for(int i=0;i<n;i+=2){
			int na=count(s.begin()+i,s.begin()+i+2,'a');
			int nb=count(s.begin()+i,s.begin()+i+2,'b');
			if(na!=nb){s[i]='a';s[i+1]='b';}
		}
		for(int i=0;i<n;i++){
			if(s[i]!=r[i]) d++;
		}
		cout<<d<<"\n"<<s<<endl;
	}
	return 0;
}
