//https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii
//Lang		:	C++
//Time		:	303 ms
//Memory	:	29.4 MB
class Solution{
public:
    int minSteps(string s, string t){
		map<char,int> ms,mt;
		for(char c:s) ms[c]++;
		for(char c:t) mt[c]++;
		int suma=0;
		for(char c='a';c<='z';c++) suma+=abs(ms[c]-mt[c]);
		return suma;
    }
};
