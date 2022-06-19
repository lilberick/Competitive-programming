//https://leetcode.com/problems/count-items-matching-a-rule
//Lang		:	C++
//Time		:	77 ms
//Memory	:	31 MB
class Solution {
	public:
	    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue){
		    map<string,int> m;
		    m["type"]=0;
		    m["color"]=1;
		    m["name"]=2;
		    int r=0;
		    for(int i=0;i<items.size();i++){
			    if(items[i][m[ruleKey]]==ruleValue) r++;
		    }
		    return r;
	    }
};
