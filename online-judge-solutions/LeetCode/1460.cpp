//https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays
//Lang		:	C++
//Time		:	17 ms
//Memory	:	14.5 MB
class Solution{
public:
    bool canBeEqual(vector<int>& t, vector<int>& a){
        sort(begin(a),end(a));
        sort(begin(t),end(t));
        return a==t?true:false; 
    }
};
