//https://leetcode.com/problems/hamming-distance
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6 MB
class Solution{
public:
    int hammingDistance(int x,int y){
        return __builtin_popcount(x^y);
    }
};
