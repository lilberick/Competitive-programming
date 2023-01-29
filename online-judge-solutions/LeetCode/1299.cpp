//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side
//Lang		:	C++
//Time		:	2946 ms
//Memory	:	68.6 MB
class Solution{
public:
    vector<int> replaceElements(vector<int>& a){
	    for(int i=0;i<a.size()-1;i++){
		    a[i]=*max_element(begin(a)+i+1,end(a));
	    }
	    a.back()=-1;
        return a;
    }
};
