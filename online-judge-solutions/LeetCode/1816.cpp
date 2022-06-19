//https://leetcode.com/problems/truncate-sentence
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.5 MB
class Solution {
	public:
	    string truncateSentence(string s, int k) {
		s+=" ";
		string m,s2;
		for(int i=0;i<s.size() && k;i++){
		    if(isalpha(s[i])) m+=s[i];
		    else{s2+=m+" ";k--;m="";}
		}
		s2.erase(s2.begin()+s2.size()-1);
		return s2;
	    }
};
