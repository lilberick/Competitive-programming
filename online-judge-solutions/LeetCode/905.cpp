//https://leetcode.com/problems/sort-array-by-parity
//Lang		:	C++
//Time		:	11 ms
//Memory	:	16.6 MB
class Solution{
public:
    vector<int> sortArrayByParity(vector<int>& nums){
        vector<int> par,impar;
        for(int i:nums){
            (i%2==0)?par.push_back(i):impar.push_back(i);
        }
        par.insert(end(par),begin(impar),end(impar));
        return par;
    }
};
