#include <iostream>
#include <vector>

using std::cout,std::endl,std::vector;

int main()

{
	vector map(10,10);
	for (auto m : map)
		cout <<"+ ";
	cout<<endl;
	for (int j{}; j<=10; j++)
	{
		for (int i{}; i<=10; i++)
		{
			cout<<".";
		}
		cout<<endl;
	}

}
