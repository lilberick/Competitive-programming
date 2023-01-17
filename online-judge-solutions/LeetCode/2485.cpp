//https://leetcode.com/problems/find-the-pivot-integer/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6 MB
class Solution{
public:
    int pivotInteger(int n){
		int r=-1;
		for(int i=1;i<=n;i++){
			int a=(i*(i+1))/2;
			int b=(n*(n+1))/2-(((i-1)*(i))/2);
			if(a==b){r=i;}
		}
		return r;
    }
};
