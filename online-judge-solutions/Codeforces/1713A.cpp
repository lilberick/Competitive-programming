//https://codeforces.com/problemset/problem/1713/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,x,y;
	cin>>t;
	while(t--){
		cin>>n;
		int xmin=0,ymin=0,xmax=0,ymax=0;
		while(n--){
			cin>>x>>y;
			xmin=min(xmin,x);
			xmax=max(xmax,x);
			ymin=min(ymin,y);
			ymax=max(ymax,y);
		}
		cout<<2*((xmax-xmin)+ymax-ymin)<<endl;
	}
	return 0;
}
