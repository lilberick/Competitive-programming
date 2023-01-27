//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop
//Lang		:	C++
//Time		:	3 ms
//Memory	:	9.9 MB
class Solution{
public:
    vector<int> finalPrices(vector<int>& p){
        vector<int> w;
        for(int i=0;i<p.size();i++){
            bool e=true;
            for(int j=i+1;j<p.size();j++){
                if(p[j]<=p[i]){w.push_back(p[i]-p[j]);e=false;break;}
            }
            if(e) w.push_back(p[i]);
        }
        return w;
    }
};
