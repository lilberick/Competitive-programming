//https://leetcode.com/problems/rings-and-rods
//Lang		:	C++
//Time		:	6 ms
//Memory	:	6.5 MB
#include<map>
#include<algorithm>
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
class Solution {
	public:
	    int countPoints(string rings){
		    map<int,string> m;
		    for(int i=0;i<rings.size();i++){
			    if(isalpha(rings[i])){
				    int j=rings[i+1]-'0';
				    m[j]+=rings[i];
			    }
		    }
		    int r=0;
		    tr(m,i){
			    string s=i->second;
			    sort(s.begin(),s.end());
			    s.erase(unique(s.begin(),s.end()),s.end());
			    if(s.size()==3) r++;
		    }
		    return r;
	    }
};
