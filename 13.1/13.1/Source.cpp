#include <iostream> 
#include <fstream>
//Sarah Sedy HW6 13.1 172.1//
using namespace std;

int main()
{	
	int value;
	int i;
	ofstream output;

	//creating the text file//

	output.open("Exercise13_1.txt"); {
		for (int i = 0; i < 100; ++i)
			value = rand();
		output << i << " " << value << "/n"; }

	output.close();
	
	return 0;

}