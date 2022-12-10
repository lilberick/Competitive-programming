//https://leetcode.com/problems/subrectangle-queries/description/
//Lang		:	C++
//Time		:	41 ms
//Memory	:	18.6 MB
class SubrectangleQueries{
	private:
		vector<vector<int>> v;
	public:
		SubrectangleQueries(vector<vector<int>>& rectangle){v=rectangle;}
		void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue){
			for(int i=row1;i<=row2;i++){
				for(int j=col1;j<=col2;j++){v[i][j]=newValue;}
			}
		}
		int getValue(int row, int col){return v[row][col];}
};
