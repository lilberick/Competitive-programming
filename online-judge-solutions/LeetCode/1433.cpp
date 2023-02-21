//https://leetcode.com/problems/check-if-a-string-can-break-another-string
//Lang		:	C++
//Time		:	90 ms
//Memory	:	11.7 MB
class Solution{
public:
    bool checkIfCanBreak(string s1, string s2){
		sort(begin(s1),end(s1));
		sort(begin(s2),end(s2));
		bool a=true;
		for(int i=0;i<s1.size() && a;i++) if(s1[i]-s2[i]<0) a=false;
		bool b=true;
		for(int i=0;i<s1.size() && b;i++) if(s2[i]-s1[i]<0) b=false;
		return a||b;
    }
};
