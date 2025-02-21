#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int mark1, mark2, mark3, mark4, mark5;

	cout << "Input students' marks: ";
	cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;

	double avg = calculate_avg_mark(mark1, mark2, mark3, mark4, mark5);

	cout << "Students average mark is " << avg << ".\n";

	return 0;
}
