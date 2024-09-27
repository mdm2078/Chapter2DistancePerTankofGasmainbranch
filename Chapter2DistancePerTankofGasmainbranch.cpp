// Chapter2DistancePerTankofGasmainbranch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main() {
	// Given vaules
	double gallons = 15.0;
	double miles = 375.0;

	// Calculate MPG
	double mpg = miles / gallons;

	// Display result
	cout << "The car gets" << mpg << "miles per gallon." << endl;

	return 0;
}