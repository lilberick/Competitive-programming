//https://codeforces.com/problemset/problem/831/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	string a,b,c;
	while(cin>>a>>b>>c){
		map<char,char> m;
		for(int i=0;i<a.size();i++){
			m[a[i]]=b[i];
			m[toupper(a[i])]=toupper(b[i]);
		}
		for(int i=0;i<c.size();i++){
			cout<<((c[i]>47 && c[i]<58)?c[i]:m[c[i]]);
		}cout<<endl;
	}
	return 0;
}
