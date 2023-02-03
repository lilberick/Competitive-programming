//https://leetcode.com/problems/score-after-flipping-matrix
//Lang		:	C++
//Time		:	89 ms
//Memory	:	31.3 MB
class Solution{
public:
    int partitionString(string s){
        int r=0;
	    set<char> z(begin(s),end(s));
	    vector<string> v;
	    string w;
	    for(char c:s){
		    if(w.find(c)<w.size()){
			    v.push_back(w);
			    w="";
		    }
		    w+=c;
	    }
	    v.push_back(w);
        return v.size();
    }
};
