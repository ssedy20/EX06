#include <iostream>
#include <fstream>
//Sarah Sedy HW6 13.5 172.1//
using namespace std;


int main()
{
	const int rank = 1000;
	int n;

	ifstream names;
	string target, boyname, girlname, year;
	bool findBoy, findGirl;
	int rank, i;
	int rankArray[rank];
	string boyArray[rank];
	string girlArray[rank];
	names.open("Babynameranking2010.txt"); //retrieving name lists//
	names.open("Babynameranking2011.txt");
	names.open("Babynameranking2012.txt");
	names.open("Babynameranking2013.txt");
	names.open("Babynameranking2014.txt");

	while (names >> rank >> boyname >> girlname) {
		for (i = 0; i<rank; i++) {
			rankArray[i] = rank;
			boyArray[i] = boyname;
			girlArray[i] = girlname;
		}
	}
	cout << "Enter a year:";
	cin >> year;
	cout << "Enter a gender:";
	cin >> boyname, girlname;
	cout << "Enter a name: ";
	cin >> target;
	cout << endl;

	//I was unsure about how to retrieve the names from a specific annual list so this as far as I got//
	for (n = 0; n<rank; n++) {
		if (target == boyArray[n]) {
			cout << target << " is ranked " << n << " in popularity among boys." << endl; //to find boy name ranking//
			findBoy = true;
		}
		if (target == girlArray[n]) {
			cout << target << " is ranked " << n << " in popularity among girls." << endl; //to find girl name ranking//
			findGirl = true;
		}
	}
	if (findBoy != true) cout << target << " ERROR: Name not on list." << endl;
	if (findGirl != true) cout << target << " ERROR: Name not on list." << endl;

	return 0;
}