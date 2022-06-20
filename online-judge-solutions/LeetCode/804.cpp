//https://leetcode.com/problems/unique-morse-code-words
//Lang		:	C++
//Time		:	7 ms
//Memory	:	9.1 MB
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    int uniqueMorseRepresentations(vector<string>& words){
		    vector<string> m={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
		    string s;
		    vector<string> w,v;
		    int r=0;
		    for(string x:words){
			    s="";
			    for(char y:x){
				    int i=y-97;
				    s+=m[i];
			    }
			    w.push_back(s);
		    }
		    sort(w.begin(),w.end());
		    w.erase(unique(w.begin(),w.end()),w.end());
		    v=w;
		    v.size()==w.size() ? r=v.size():r=w.size()-v.size();
		    return r;
	    }
};
