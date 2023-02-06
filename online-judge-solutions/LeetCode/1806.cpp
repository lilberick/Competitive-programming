//https://leetcode.com/problems/minimum-number-of-operations-to-reinitialize-a-permutation
//Lang		:	C++
//Time		:	28 ms
//Memory	:	25.7 MB
vector<int> iterar(vector<int> &v){
	vector<int> w(v);
	int n=v.size();
	for(int i=0;i<v.size();i++){
		w[i]=(i%2==0?v[i/2]:v[n/2+(i-1)/2]);
	}
	return w;
}
class Solution{
public:
    int reinitializePermutation(int n){
		vector<int> v(n),w;
		iota(begin(v),end(v),0);
		int r=1;
		w=v;
		w=iterar(w);
		while(v!=w){
			w=iterar(w);
			r++;
		}
		return r;
    }
};
