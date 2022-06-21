//https://leetcode.com/problems/reverse-words-in-a-string-iii
//Lang		:	C++
//Time		:	26 ms
//Memory	:	16 MB
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    string reverseWords(string s){
		    s=s+' ';
		    string r,o;
		    vector<string> v;
		    for(char x:s){
			    if(x==' '){v.push_back(r);r="";}
			    else{r+=x;}
		    }
		    for(int i=0;i<v.size();i++){
			    reverse(v[i].begin(),v[i].end());
		    }
		    for(int i=0;i<v.size();i++){
			    (i<v.size()-1) ? o+=v[i]+" ": o+=v[i];
		    }
		    return o;
	    }
};
