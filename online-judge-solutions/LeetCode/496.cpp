//https://leetcode.com/problems/next-greater-element-i
//Lang		:	C++
//Time		:	12 ms
//Memory	:	8.5 MB
#include<vector>
#include<algorithm>
class Solution{
	public:
	    vector<int> nextGreaterElement(vector<int>& v1, vector<int>& v2){
		    int m=*max_element(v2.begin(),v2.end());
		    vector<int> w;
		    for(int i=0;i<v1.size();i++){
			    int j=find(v2.begin(),v2.end(),v1[i])-v2.begin();
			    if(find(v2.begin(),v2.end(),v1[i])!=v2.end() && j<v2.size()-1 && v2[j]<m){
			    	    int a=1;
				    for(int k=j+1;k<v2.size() && a==1;k++){
					    if(v2[k]>v1[i]){
						    a=-1;
						    w.push_back(v2[k]);
					    }
				    }
				    if(a==1) w.push_back(-1);
			    }else{w.push_back(-1);}
		    }
		    return w;
	    }
};
