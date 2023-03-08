//https://codeforces.com/problemset/problem/760/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
#include<math.h>
using namespace std;
int main(){
	map<int,int> n={{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
	int m,d;cin>>m>>d;
	cout<<ceil((n[m]-(8-d))/7.0)+1<<endl;
	return 0;
}
