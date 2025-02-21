#include <iostream>
#define SIZE 100
using namespace std;

int get_min(int* numbers, int count) {
	int min = numbers[0];

	for (int i = 1; i < count; i++)
	{
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}

	return min;
}

int get_max(int* numbers, int count) {
	int max = numbers[0];

	for (int i = 1; i < count; i++)
	{
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}

	return max;
}

int main() {
	int numbers[SIZE];

	int count;
	cout << "Input count of numbers: ";
	cin >> count;

	cout << "Input numbers: ";
	for (int i = 0; i < count; i++)
	{
		cin >> numbers[i];
	}
	
	cout << "Max value is " << get_max(numbers, count) << ".\n";
	cout << "Min value is " << get_min(numbers, count) << ".\n";
		
	return 0;
}
