//https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts
//Lang		:	C++
//Time		:	104 ms
//Memory	:	12.6 MB
class Solution{
public:
    int minimumOperations(vector<int>& n){
		set<int> s(begin(v),end(v));
		int r=0;
		while(!(s.size()==1 && *begin(s)==0)){
			r++;
			int minimo=101;
			for(int i=0;i<v.size();i++){
				if(v[i]!=0) minimo=min(minimo,v[i]);
			}
			for(int i=0;i<v.size();i++) if(v[i]!=0) v[i]-=minimo;
			set<int> t(begin(v),end(v));
			swap(s,t);
			for(int i:v) cout<<i<<" ";cout<<endl;
		}
		return r;
    }
};
