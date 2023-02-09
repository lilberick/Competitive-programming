//https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position
//Lang		:	C++
//Time		:	5 ms
//Memory	:	7.3 MB
class Solution{
public:
    int minCostToMoveChips(vector<int>& p){
		int pares=0,impares=0;
        for(int i:p) i%2==0?pares++:impares++;
        return min(pares,impares);
    }
};
