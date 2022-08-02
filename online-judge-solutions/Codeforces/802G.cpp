//https://codeforces.com/problemset/problem/802/G
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	string s,w;
	while(cin>>s){
		w="heidi";
		for(char x:s){
			if(w[0]==x) w.erase(w.begin());
		}
		cout<<(w.size()==0 ?"YES":"NO")<<"\n";
	}
	return 0;
}
