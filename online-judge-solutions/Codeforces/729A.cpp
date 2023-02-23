//https://codeforces.com/problemset/problem/729/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,i=0;cin>>n;
	string s,t;cin>>s;
	while(i<s.size()){
		int j=i+3;
		if(s.substr(i,3)=="ogo"){
			while(j<s.size() && s.substr(j,2)=="go") j+=2;
			if(j>=i+3) s.replace(i,j-i,"***");
		}else i++;
	}
	cout<<s<<endl;
	return 0;
}
