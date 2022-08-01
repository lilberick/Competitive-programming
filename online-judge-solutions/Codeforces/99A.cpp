//https://codeforces.com/problemset/problem/99/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		int i=s.find('.');
		int d=s[i+1]-'0';
		int e=s[i-1]-'0';
		string se=s.substr(0,i);
		if(e<9){
			if(d>=5){
				e++;
				se.back()=char(e+48);
			}
			cout<<se<<endl;
		}else cout<<"GOTO Vasilisa.\n";
	}
	return 0;
}
