//https://leetcode.com/problems/sort-integers-by-the-power-value
//Lang		:	C++
//Time		:	34 ms
//Memory	:	12 MB
int power(int x){
	int t=0;
	while(x!=1){
		x=x%2==0?x/2:3*x+1;
		t++;
	}
	return t;
}
class Solution{
public:
    int getKth(int lo,int hi,int k){
		map<int,vector<int>> m;
		for(int i=lo;i<=hi;i++) m[power(i)].push_back(i);
		vector<int> v;
		for(auto i=m.begin();i!=m.end();i++) for(int j:i->second) v.push_back(j);
		return v[k-1];
    }
};
