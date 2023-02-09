//https://leetcode.com/problems/check-if-all-as-appears-before-all-bs
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.2 MB
class Solution{
public:
    bool checkString(string s){
        int ia=s.rfind('a');
        int ib=s.find('b');
        return  (ia<ib || ia<0 || ib<0)?true:false;
    }
};
