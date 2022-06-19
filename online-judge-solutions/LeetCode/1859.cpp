//https://leetcode.com/problems/sorting-the-sentence
//Lang		:	C++
//Time		:	3 ms
//Memory	:	6.3 MB
#include<algorithm>
class Solution {
	public:
	    string sortSentence(string s){
		    string m,r;
		    int n=count(s.begin(),s.end(),' ');
		    string v[n+1];
		    for(char x:s){
			    if(x!=' ' && !isdigit(x)) m+=x;
			    else if(isdigit(x)){v[(x-49)]=m;m="";}
		    }
		    for(int i=0;i<n+1;i++){
			    i<n ? r+=v[i]+" ":r+=v[i];
		    }
		    return r;
	    }
};
