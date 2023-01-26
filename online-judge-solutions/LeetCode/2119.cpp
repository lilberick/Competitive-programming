//https://leetcode.com/problems/a-number-after-a-double-reversal
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6 MB
class Solution {
public:
    bool isSameAfterReversals(int num){
        return (num%10!=0 || num==0);
    }
};
