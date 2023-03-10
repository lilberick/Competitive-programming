//https://codeforces.com/problemset/problem/794/A
//Lang		:	GNU C++14
//Time		:	233 ms
//Memory	:	3300 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int a,b,c,n,x,s=0;cin>>a>>b>>c>>n;
	map<int,int> m;
	for(int i=1;i<=n;i++){cin>>x;m[x]++;}
	for(auto& i:m) if(i.first>b && i.first<c) s+=i.second;
	cout<<s<<endl;
	return 0;
}
