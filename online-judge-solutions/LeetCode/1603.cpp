//https://leetcode.com/problems/design-parking-system/
//Lang		:	C++
//Time		:	171 ms
//Memory	:	33.2 MB
class ParkingSystem {
	private:
		int b,m,s;
		int B=0,M=0,S=0;
	public:
		ParkingSystem(int big, int medium, int small) {
			b=big; m=medium; s=small;
		}
		bool addCar(int carType){
			bool r;
			if(carType==1){B++; r=(B>b?false:true);}
			else if(carType==2){M++;r=(M>m?false:true);}
			else if(carType==3){S++;r=(S>s?false:true);}
			return r;
		}
};
