//https://codeforces.com/problemset/problem/411/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		bool digito=false,large=false,small=false;
		for(int i=0;i<s.size();i++){
			if(isupper(s[i])) large=true;
			if(islower(s[i])) small=true;
			if(isdigit(s[i])) digito=true;
		}
		cout<<((s.size()>=5 && large && small && digito)?"Correct":"Too weak")<<endl;
	}
	return 0;
}
