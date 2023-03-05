//https://leetcode.com/problems/apply-operations-to-an-array
//Lang		:	C++
//Time		:	6 ms
//Memory	:	9.4 MB
class Solution{
public:
    vector<int> applyOperations(vector<int>& n){
		vector<int> v,a,b;
		for(int i=0;i<n.size()-1;i++){
			if(n[i]==n[i+1]){v.push_back(n[i]*2);v.push_back(0);i++;}
			else v.push_back(n[i]);
		}
		if(v.size()<n.size()) v.push_back(n[n.size()-1]);
		for(int i:v) i==0?b.push_back(0):a.push_back(i);
		a.insert(end(a),begin(b),end(b));
		return a;
    }
};
