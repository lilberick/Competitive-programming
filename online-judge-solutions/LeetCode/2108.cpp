//https://leetcode.com/problems/find-first-palindromic-string-in-the-array
//Lang		:	C++
//Time		:	57 ms
//Memory	:	23 MB
#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
	public:
	    string firstPalindrome(vector<string>& words){
		string r;
		int t=1;
		for(int i=0;i<words.size() && t;i++){
		    string y=words[i];
		    reverse(words[i].begin(),words[i].end());
		    if(words[i]==y){r=y;t=0;}
		    else r="";
		}
		return r;
	    }
};
