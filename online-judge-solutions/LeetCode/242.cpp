//https://leetcode.com/problems/valid-anagram
//Lang		:	C++
//Time		:	33 ms
//Memory	:	7.3 MB
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    bool isAnagram(string s, string t){
		    sort(s.begin(),s.end());
		    sort(t.begin(),t.end());
		    bool r;
		    s==t ? r=true:r=false;
		    return r;
	    }
};
