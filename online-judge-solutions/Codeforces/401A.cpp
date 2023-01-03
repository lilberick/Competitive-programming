//https://codeforces.com/problemset/problem/401/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double n,x,c;
	while(cin>>n>>x){
		int s=0;
		for(int i=0;i<n;i++){
			cin>>c;
			s+=c;
		}
		s=abs(s);
		cout<<ceil(s/x)<<endl;
	}
	return 0;
}
