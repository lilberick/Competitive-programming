//https://codeforces.com/problemset/problem/653/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main(){
	int n,x;cin>>n;
	set<int> t;
	for(int i=0;i<n;i++) t.insert(istream_iterator<int>(cin),istream_iterator<int>());
	bool b=true;
	if(t.size()>2){
		for(auto i=0;i<t.size()-2 && b;i++){
			int i1=*next(t.begin(),i);
			int i2=*next(t.begin(),i+1);
			int i3=*next(t.begin(),i+2);
			if(abs(i1-i2)==1 && abs(i2-i3)==1) b=false;
		}
	}
	cout<<(b?"NO":"YES")<<endl;
	return 0;
}
