#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
    return 0.0;
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    return 0.0;
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    return 0.0;
}
