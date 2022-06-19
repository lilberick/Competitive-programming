//https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet
//Lang		:	C++
//Time		:	45 ms
//Memory	:	7.8 MB
#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
	    vector<string> cellsInRange(string s){
		vector<string>v;
		for(char i=s[0];i<=s[3];i++){
			for(int j=(s[1]-48);j<=(s[4]-48);j++){
				cout<<i<<j<<endl;
				v.push_back(string(1,i)+to_string(j));
			}
		}
		return v;
	    }
};
