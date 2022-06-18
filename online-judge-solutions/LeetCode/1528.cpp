//https://leetcode.com/problems/shuffle-string
//Lang		:	C++
//Time		:	23 ms
//Memory	:	15.1 MB
#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
	    string restoreString(string s, vector<int>& indices){
		    string a=s;
		    for(int i=0;i<s.size();i++){
			    a[indices[i]]=s[i];
		    }
		    return a;
	    }
};
