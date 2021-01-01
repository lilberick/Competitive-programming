//https://www.codewars.com/kata/56541980fa08ab47a0000040/train/cpp
#include<string>
#include<iostream>
using namespace std;
class Printer{
public:
  static string printerError(string s){
	  string respuesta;
  	int error=0,k=s.size();
	for(int i=0;i<k;i++){
		if((s[i]+0)<97 || (s[i]+0)>109){error++;}
	}
	respuesta=to_string(error)+"/"+to_string(k);
	return respuesta;
  }
};
int main(){
	Printer impresora;
	string s;
	while(cin>>s){
		cout<<impresora.printerError(s)<<endl;
	}
	return 0;
}
