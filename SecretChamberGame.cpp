#include <iostream>
#include <vector>

using std::cout,std::endl,std::vector;

void drawRow(vector<char>& row)
{

	for (auto a : row)
		cout<<a;
	cout<<endl;
};

void drawMapTest(vector<char>& row1,vector<char>& row2,vector<char>& row3,vector<char>& row4,vector<char>& row5,vector<char>& row6,vector<char>& row7,vector<char>& row8,vector<char>& row9,vector<char>& row10 )
{
	drawRow(row1);
	drawRow(row2);
	drawRow(row3);
	drawRow(row4);
	drawRow(row5);
	drawRow(row6);
	drawRow(row7);
	drawRow(row8);
	drawRow(row9);
	drawRow(row10);
	
};


vector<vector<char>> vectorPutter(vector<char>& row1,vector<char>& row2,vector<char>& row3,vector<char>& row4,vector<char>& row5,vector<char>& row6,vector<char>& row7,vector<char>& row8,vector<char>& row9,vector<char>& row10)
{
	vector<vector<char>> Map;
	Map.push_back(row1);
	Map.push_back(row2);
	Map.push_back(row3);
	Map.push_back(row4);
	Map.push_back(row5);
	Map.push_back(row6);
	Map.push_back(row7);
	Map.push_back(row8);
	Map.push_back(row9);
	Map.push_back(row10);

	return Map;
};


int main()

{
	vector row1(10,'.');
	vector row2(10,'.');
	vector row3(10,'.');
	vector row4(10,'.');
	vector row5(10,'.');
	vector row6(10,'.');
	vector row7(10,'.');
	vector row8(10,'.');
	vector row9(10,'.');
	vector row10(10,'.');
	drawMapTest(row1,row2,row3,row4,row5,row6,row7,row8,row9,row10);

	row5[5]='P';

//	vectorPutter(row1,row2,row3,row4,row5,row6,row7,row8,row9,row10);
//	vector test=vectorPutter(row1,row2,row3,row4,row5,row6,row7,row8,row9,row10);i
//
	drawMapTest(row1,row2,row3,row4,row5,row6,row7,row8,row9,row10);
		
}
