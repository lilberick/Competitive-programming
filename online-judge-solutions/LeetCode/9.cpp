//https://leetcode.com/problems/palindrome-number
//Lang		:	C++
//Time		:	31 ms
//Memory	:	6 MB
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    bool isPalindrome(int x);
};
bool Solution::isPalindrome(int x){
	bool r=false;
	if(x>-1){
		string s=to_string(x),sr;
		sr=s;
		reverse(sr.begin(),sr.end());
		if(s==sr) r=true;
	}
	return r;
}
