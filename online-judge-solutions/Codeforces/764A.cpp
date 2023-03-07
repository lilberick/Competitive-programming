//https://codeforces.com/problemset/problem/764/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<numeric>
using namespace std;
int mcd(int a,int b){
	if(b==0) return a;
	return mcd(b,a%b);//cuidar que a no sea (-)
}
int mcm(int a,int b){
	return (a/mcd(a,b))*b;
}
int main(){
	int n,m,z;cin>>n>>m>>z;
	cout<<z/mcm(n,m)<<endl;
	return 0;
}
