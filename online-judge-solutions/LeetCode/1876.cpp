//https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters
//Lang		:	C++
//Time		:	13 ms
//Memory	:	8 MB
class Solution{
public:
    int countGoodSubstrings(string s){
        int r=0;
		if(s.size()>2){
	        for(int i=0;i<s.size()-2;i++){
            	string t=s.substr(i,3);
	            set<char> se(begin(t),end(t));
            	if(se.size()==3) r++;
        	}
    	}
        return r;
	}
};
