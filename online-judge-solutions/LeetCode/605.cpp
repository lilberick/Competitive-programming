//https://leetcode.com/problems/can-place-flowers
//Lang		:	C++
//Time		:	26 ms
//Memory	:	20.3 MB
class Solution{
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
		int r=0;
		for(int i=0;i<f.size();i++){
			if(f[i]+(i>0?f[i-1]:0)+(i<f.size()-1?f[i+1]:0)==0){
				r++;
				f[i]=1;
			}
		}
		return r>=n;
    }
};
