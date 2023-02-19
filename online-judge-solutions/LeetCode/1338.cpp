//https://leetcode.com/problems/reduce-array-size-to-the-half
//Lang		:	C++
//Time		:	315 ms
//Memory	:	80.1 MB
class Solution{
public:
    int minSetSize(vector<int>& a){
        map<int,int> m;
        for(int i:a) m[i]++;
		int s=0,r=0,t;
		vector<int> w;
		for(auto i=m.begin();i!=m.end();i++){
			w.push_back(i->second);
			s+=i->second;
		}
		sort(rbegin(w),rend(w));
		for(int i=0;i<w.size();i++){
			r+=w[i];
			if(r>=s/2){t=i+1;break;}
		}
        return t;
    }
};
