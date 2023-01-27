//https://leetcode.com/problems/counting-bits
//Lang		:	C++
//Time		:	9 ms
//Memory	:	8.5 MB
class Solution{
public:
    vector<int> countBits(int n){
        vector<int> v;
        for(int i=0;i<=n;i++) v.push_back(__builtin_popcount(i));
        return v;
    }
};
