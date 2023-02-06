//https://leetcode.com/problems/find-all-duplicates-in-an-array
//Lang		:	C++
//Time		:	158 ms
//Memory	:	46.7 MB
class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        map<int,int> m;
        for(int i:v) m[i]++;
        vector<int> w;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>1) w.push_back(i->first);
        }
        return w;
    }
};
