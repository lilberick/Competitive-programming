//https://leetcode.com/problems/check-if-the-sentence-is-pangram
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.5 MB
class Solution {
	public:
	    bool checkIfPangram(string sentence){
		string s2="abcdefghijklmnopqrstuvwxyz";
		sort(sentence.begin(),sentence.end());
		sentence.erase(unique(sentence.begin(),sentence.end()),sentence.end());
		return (s2==sentence);
	    }
};
