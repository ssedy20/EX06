#include <iostream>
#include <fstream>
//Sarah Sedy HW6 13.2 172.1//
using namespace std;

int main()
{
	ifstream input;

	// opens the text file from previous exercise//
	input.open("13:1.txt");

	if (input.fail())
	{
		cout << "ERROR: File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	int count = 0;

	while (!input.eof()) // Continues program if not at the end of the file//
	{
		input.get();
		count++;
	}

	count--; // adjust count since it was increased after the last character was read//

	input.close();

	cout << "Number of characters is " << count << endl;
	return 0;
}
