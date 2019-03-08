﻿// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// Function prototypes
void printVector(vector<int> itemWeight);

int main()
{
	srand(time(0));
	int testCases = 20;
	int binCap = 10;
	int numItems = 10;

	for (int test = 0; test < testCases; test++)
	{
		vector<int> itemWeights;
		for (int i = 0; i < numItems; i++)
		{
			itemWeights.push_back(rand() % 10 + 1);
		}
		// Call functions here
		cout << "Test " << test + 1 << ": ";
		printVector(itemWeights);
	}
}

void printVector(vector<int> itemWeight)
{
	vector<int>::iterator iter;
	for (iter = itemWeight.begin(); iter != itemWeight.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}
