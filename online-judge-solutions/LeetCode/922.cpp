//https://leetcode.com/problems/sort-array-by-parity-ii
//Lang		:	C++
//Time		:	26 ms
//Memory	:	24.1 MB
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& n){
        vector<int> a,b,v;
        for(int i:n) (i%2==0)?a.push_back(i):b.push_back(i);
        for(int i=0;i<a.size();i++){
            v.push_back(a[i]);
            v.push_back(b[i]);
        }
        return v;
    }
};
