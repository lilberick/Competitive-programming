//https://leetcode.com/problems/defanging-an-ip-address
//Lang		:	C++
//Time		:	4 ms
//Memory	:	6.8 MB
#include<iostream>
#include<regex>
using namespace std;
class Solution {
	public:
	    string defangIPaddr(string address){
		address=regex_replace(address,regex("\\."),"[.]");
		return address;
	    }
};
