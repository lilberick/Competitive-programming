//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix
//Lang		:	C++
//Time		:	21 ms
//Memory	:	10.9 MB
class Solution{
public:
    int countNegatives(vector<vector<int>>& g){
        int r=0;
        for(auto i:g) for(int j:i) if(j<0) r++;
        return r;
    }
};
