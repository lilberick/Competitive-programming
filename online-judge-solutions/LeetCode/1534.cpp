//https://leetcode.com/problems/count-good-triplets
//Lang		:	C++
//Time		:	98 ms
//Memory	:	8.1 MB
class Solution {
public:
    int countGoodTriplets(vector<int>& v, int a, int b, int c){
        int r=0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                for(int k=j+1;k<v.size();k++){
                    if(abs(v[i]-v[j])<=a && abs(v[j]-v[k])<=b && abs(v[i]-v[k])<=c){
                        r++;
                    }
                }
            }
        }
        return r;
    }
};
