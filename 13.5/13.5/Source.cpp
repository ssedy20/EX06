#include <iostream>
#include <fstream>
//Sarah Sedy HW6 13.5 172.1//
using namesint main()
{
	const int rank = 1000;
	int n;
	ifstream names;
	string target, boyname, girlname, year;
	bool findBoy, findGirl;
	int rank, i;
	int rankArray[rank];
	string boyArray[rank]; //two separate arrays for names based on gender//
	string girlArray[rank];
	names.open("Babynameranking2010.txt");
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
	cout << "Please enter a year:";
	cin >> year;
	cout << "Please enter a gender (M/F):"
	cin >> boyname, girlname;
	cout << "Please enter a name: ";
	cin >> target;
	cout << endl;

	//I didn't know how to go about getting the program to seek out the specific list for the year the user inputted//
	for (n = 0; n<rank; n++) {
		if (target == boyArray[n]) {
			cout << target << " is ranked " << n << " in popularity among boys." << endl; //finds the boy name//
			findBoy = true;
		}
		if (target == girlArray[n]) {
			cout << target << " is ranked " << n << " in popularity among girls." << endl; //finds the girl name//
			findGirl = true;
		}
	}
	if (findBoy != true) cout << " ERROR: name not on list." << endl;
	if (findGirl != true) cout  << " ERROR: name not on list." << endl;

	return 0;
}