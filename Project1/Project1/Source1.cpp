/*
Christopher Hartsfield and Jaren Duffield - October 4 2017 1
Program Problem 3
Create a New Project to classify weather a given number is ascending ot descending
*/
//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	void main() {
	for (int i; i = 1; i < 31) {
	int x;
// Displays text
	cout << "Please type in a three digit number. ";
	cin >> x;
		int C = x % 10;
		int B = (x / 10) % 10;
		int A = (x / 100) % 10;
		bool ascending = A != B && B != C;
		bool descending = ascending;
		if (A > B)
			ascending = false;
		else
			descending = false;
		if (B > C)
			ascending = false;
		else
			descending = false;
		if (ascending)
			cout << " The number " << x << " is ascending \n";
		else if (descending)
			cout << " The number " << x << " is descending \n";
		else
			cout << " The number " << x << " is neither ascending nor descending \n";
		_getch();
	}
}
