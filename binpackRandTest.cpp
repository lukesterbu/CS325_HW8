// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
