//https://leetcode.com/problems/to-lower-case
//Lang		:	C++
//Time		:	5 ms
//Memory	:	6.2 MB
#include<algorithm>
class Solution {
	public:
	    string toLowerCase(string s) {
		transform(s.begin(),s.end(),s.begin(),::tolower);
		return s;
	    }
};
