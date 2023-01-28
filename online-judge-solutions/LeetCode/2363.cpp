//https://leetcode.com/problems/merge-similar-items/description
//Lang		:	C++
//Time		:	28 ms
//Memory	:	16.9 MB
class Solution{
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& v1, vector<vector<int>>& v2){
        map<int,int> m;
        for(int i=0;i<v1.size();i++) m[v1[i][0]]+=v1[i][1];
        for(int i=0;i<v2.size();i++) m[v2[i][0]]+=v2[i][1];
        vector<vector<int>> v;
        for(auto i=m.begin();i!=m.end();i++){
            v.push_back({i->first,i->second});
        }
        return v;
    }
};
