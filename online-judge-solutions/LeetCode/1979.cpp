//Find Greatest Common Divisor of Array
//Lang		:	C++
//Time		:	11 ms
//Memory	:	12.5 MB
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(begin(nums),end(nums));
        return __gcd(nums[0],nums[nums.size()-1]);
    }
};
