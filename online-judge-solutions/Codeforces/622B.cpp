//https://codeforces.com/problemset/problem/622/B
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<sstream>
#include<iomanip>
using namespace std;
vector<string> separar(string s,char c){
	istringstream f(s);
	vector<string> v;
	string r;
	while(getline(f,r,c)) v.push_back(r);
	return v;
}
int main(){
	string s;cin>>s;
	int n;cin>>n;
	vector<string> v=separar(s,':');
	int a=stoi(v[0]),b=stoi(v[1]);
	b+=n;
	a+=b/60;
	a%=24;
	b%=60;
	cout<<setw(2)<<setfill('0')<<a<<":"<<setw(2)<<setfill('0')<<b<<endl;
	return 0;
}
