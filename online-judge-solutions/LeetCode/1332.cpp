//https://leetcode.com/problems/remove-palindromic-subsequences
//Lang		:	C++
//Time		:	4 ms
//Memory	:	6.2 MB
#include<algorithm>
bool pal(string s){
    string r=s;
    reverse(s.begin(),s.end());
    if(r==s) return 1;
    return 0;
}
class Solution {
	public:
	    int removePalindromeSub(string s){
		    if(pal(s)) return 1;
		    return 2;
	    }
};
