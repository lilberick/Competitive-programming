//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string
//Lang		:	C++
//Time		:	4 ms
//Memory	:	6.4 MB
class Solution{
public:
    int strStr(string h,string n){
		int i=h.find(n);
		return i<h.size()?i:-1;
    }
};
