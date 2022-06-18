//https://leetcode.com/problems/find-the-difference
//Lang		:	C++
//Time		:	11 ms
//Memory	:	6.7 MB
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
	char findTheDifference(string s, string t){
		if(t.size()>s.size()) swap(s,t);
		sort(s.begin(),s.end());
		sort(t.begin(),t.end());
		char c;
		int f=1;
		for(int i=0;i<s.size() && f;i++){
		    if(s[i]!=t[i]){c=s[i];f=0;}
		}
		return c;
	}
};
