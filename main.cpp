#include <iostream>
#include "fun.h"
using namespace std;

int main() {
	double q1, q2;
	double p1[3], p2[3];
	char again;

	cout << "--- Simple Coulomb Calculator ---\n";

	do {
		getInputs(p1, p2, q1, q2);
		calculateAndSave(p1, p2, q1, q2);

		cout << "\nCalculate again? (y/n): ";
		cin >> again;

	} while (again == 'y');

	return 0;
}
