//https://leetcode.com/problems/merge-strings-alternately
//Lang		:	C++
//Time		:	0 ms
//Memory	:	64 MB
class Solution {
	public:
	    string mergeAlternately(string word1, string word2){
		int i=0;
		string s;
		while(word1.size() || word2.size()){
			//cout<<s<<endl;
			if(i%2==0 && word1.size()){s+=word1[0];word1.erase(0,1);}
			if(i%2!=0 && word2.size()){s+=word2[0];word2.erase(0,1);}
			i++;
		}
		return s;
	    }
};
