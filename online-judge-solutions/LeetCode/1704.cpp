//https://leetcode.com/problems/determine-if-string-halves-are-alike
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.8 MB
#include<algorithm>
class Solution {
	public:
	    bool halvesAreAlike(string s){
		    transform(s.begin(),s.end(),s.begin(),::tolower);
		    int n=s.size();
		    string a=s.substr(0,(n+1)/2);
		    string b=s.substr(((n+1)/2),(n+1)/2);
		    int na=0,nb=0;
		    for(char x:a){
			    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') na++;
		    }
		    for(char x:b){
			    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') nb++;
		    }
		    if(na==nb){return true;}
		    return false;
	    }
};
