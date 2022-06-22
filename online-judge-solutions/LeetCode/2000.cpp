//https://leetcode.com/problems/reverse-prefix-of-word
//Lang		:	GNU C++14
//Time		:	2 ms
//Memory	:	6.1 MB
#include<algorithm>
class Solution {
	public:
	    string reversePrefix(string word, char ch){
		    int i=word.find(ch);
		    string a=word.substr(0,i+1);
		    reverse(a.begin(),a.end());
		    string b=word.substr(i+1,word.size()-1-i);
		    return a+b;
	    }
};
