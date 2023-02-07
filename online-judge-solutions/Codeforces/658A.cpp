//https://codeforces.com/problemset/problem/658/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solucion(int n,int c,vector<int> &p,vector<int> &t){
	int tt=0,r=0;
	for(int i=0;i<n;i++){
		tt+=t[i];
		if(p[i]>=c*tt) r+=p[i]-c*tt;
	}
	return r;
}
int main(){
	int n,c;cin>>n>>c;
	vector<int> p(n),t(n);
	for(int i=0;i<n;i++){cin>>p[i];}
	for(int i=0;i<n;i++){cin>>t[i];}
	int a=solucion(n,c,p,t);
	sort(rbegin(p),rend(p));
	sort(rbegin(t),rend(t));
	int b=solucion(n,c,p,t);
	cout<<(a>b?"Limak":(a==b?"Tie":"Radewoosh"))<<endl;
	return 0;
}
