//https://leetcode.com/problems/koko-eating-bananas
//Lang		:	C++
//Time		:	47 ms
//Memory	:	19 MB
bool Selacometodita(vector<int> &p,int h,int x){
	long long s=0;
	for(int j:p) s+=ceil(j/(x*1.0));
	return s<=h;
}
class Solution{
public:
    int minEatingSpeed(vector<int>& p,int h){
		int maximo=*max_element(begin(p),end(p)),minimo=1;
		while(minimo<maximo){
			int promedio=(maximo+minimo)/2;
			(Selacometodita(p,h,promedio))?maximo=promedio:minimo=promedio+1;
		}
		return minimo;
    }
};
