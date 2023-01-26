//https://leetcode.com/problems/array-partition
//Lang		:	C++
//Time		:	58 ms
//Memory	:	28.3 MB
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int s=0;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i++){
           if(i%2==0) s+=nums[i];
       }
       return s;
    }
};
