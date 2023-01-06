//codeforces.com/problemset/problem/447/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,p,x;
	while(cin>>p>>n){
		map<int,int> m;
		int s=-1;
		bool b=true;
		for(int i=0;i<n;i++){
			cin>>x;
			m[x%p]++;
			if(m[x%p]>1 && b){s=i;b=1-b;}
		}
		cout<<((s>-1)?s+1:s)<<endl;
	}
	return 0;
}
