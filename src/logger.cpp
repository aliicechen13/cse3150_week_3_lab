#include <iostream>
#include <string>
#include "logger.h"

using std::cout, std::cin, std::endl, std::string;

void addReading(const string& label, double value, string labels[],
		double values[], int& size, int capacity) {
	if (size >= capacity)
		throw string("Full");
	labels[size] = label;
	values[size] = value;
	size++;
}

void updateValue(double* valuePtr, double newValue) {
	if (valuePtr != nullptr)
		*valuePtr = newValue;
}

void printReading(const string& label, const double& value) {
	cout << label << ": " << value << endl;
}

double average(const double values[], int size) {
	if (size == 0)
		throw string("Empty");

	double sum = 0.0;
	for (int i = 0; i < size; i++) 
		sum += values[i];
	return sum/size;
}

double minValue(const double values[], int size) {
	if (size == 0)
		throw string("Empty");

	double min = values[0];
	for (int i = 0; i < size; i++) {
		if (values[i] < min)
			min = values[i];
	}	
	return min;
}

double maxValue(const double values[], int size) {
	if (size == 0)
                throw string("Empty");

	double max = values[0];
	for (int i = 0; i < size; i++) {
		if (values[i] > max)
			max = values[i];
	}
	return max;
}
