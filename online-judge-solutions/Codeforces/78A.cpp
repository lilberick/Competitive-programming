//https://codeforces.com/problemset/problem/78/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n=3,a[3]={5,7,5};
	bool r=true;
	while(n--){
		string s;getline(cin,s);
		int vocales=0;
		for(char x:s){
			if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') vocales++;
		}
		if(vocales!=a[n]) r=false;
	}
	cout<<(r?"YES":"NO")<<"\n";
	return 0;
}
