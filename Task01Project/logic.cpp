#include "logic.h"
#define NUMBER_OF_STUDENTS 5

double calculate_avg_mark(int mark1, int mark2, int mark3, int mark4, int mark5) {
	double s = mark1 + mark2 + mark3 + mark4 + mark5;
	return s / NUMBER_OF_STUDENTS;
}