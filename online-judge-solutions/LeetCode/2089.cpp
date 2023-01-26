//https://leetcode.com/problems/find-target-indices-after-sorting-array
//Lang		:	C++
//Time		:	8 ms
//Memory	:	11.7 MB
class Solution {
public:
    vector<int> targetIndices(vector<int>& n, int t){
       sort(begin(n),end(n));
       vector<int> w;
       for(int i=0;i<n.size();i++) if(n[i]==t) w.push_back(i);
       return w;
    }
};
