//https://leetcode.com/problems/percentage-of-letter-in-string
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.3 MB
class Solution{
	public:
	    int percentageLetter(string s, char letter){
		int n=count(s.begin(),s.end(),letter);
		return (n*100)/s.size();
	    }
};
