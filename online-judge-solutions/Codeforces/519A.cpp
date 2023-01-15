//https://codeforces.com/problemset/problem/519/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	map<char,int> m{{'Q',9},{'R',5},{'B',3},{'N',3},{'P',1},{'q',9},{'r',5},{'b',3},{'n',3},{'p',1}};
	char c;
	int w=0,b=0;
	while(cin>>c){
		if(c>=65 && c<=90) w+=m[c];
		if(c>=97 && c<=122) b+=m[c];
	}
	cout<<(w>b?"White":(w==b?"Draw":"Black"))<<endl;
	return 0;
}
