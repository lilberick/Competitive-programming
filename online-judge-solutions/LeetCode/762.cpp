//https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.9 MB
bool es_primo(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; (i*i)<=n; i+=2) if(n%i == 0 ) return false;
    return true;
}
class Solution{
public:
    int countPrimeSetBits(int l, int r){
		int x=0;
		for(int i=l;i<=r;i++) if(es_primo(__builtin_popcount(i))) x++;
		return x;
    }
};
