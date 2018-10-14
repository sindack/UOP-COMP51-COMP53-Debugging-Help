#include <iostream>
#include <ctime>
using namespace std;

// Addition Function
// Parameters: two numbers to add together.
// Returns: the sum of the numbers as an int.
void addition(int addNum1, int addNum2) {
	int answer = 0;
	answer = addNum1 + addNum2;
	return;
 }


// Subtraction Function 
// Parameters: two numbers to subtract (second number subtracts from first number).
// Returns: the difference of the numbers as an int.
int subtraction(int subNum1, int subNum2) {
	int answer = 0;
	answer = subNum1 - subNum2;
	return subNum1;
}


// Multiplication Function
// Parameters: two mumbers to multiply, and 1 return parameter (pass by reference).
// Returns: nothing.
void multiplication(int multNum1, int multNum2, int answer) {
	answer = multNum1 * multNum2;
}


// Division Function
// Parameters: two numbers to divide, first number is divided by second number.
// Returns: result of division.
int division(double divNum1, double divNum2) {
	double answer = divNum1 / divNum2;
	return answer;
}


// Main Function
int main() {
	// Seed random number generator.
	srand((unsigned)time(0));

	cout << "Hello, my name is Wilson. Some of my functions may be buggy, but I will try my best to math." << "\n\n";

	// Addition section
	cout << "Addition:" << endl;
	int additionNum1 = 0, 
		additionNum2 = 0, 
		additionAnswer = 0;

	additionNum1 = rand() % 9 + 1;
	additionNum2 = rand() % 9 + 1;

	addition(additionNum1, additionNum2);

	cout << additionNum1 << " + " << additionNum2 << " = " << additionAnswer << "\n\n";

	// Subtraction section
	cout << "Subtraction:" << endl;

	int subtractionNum1 = 0,
		subtractionNum2 = 0,
		subtractionAnswer = 0;

	subtractionNum1 = rand() % 9 + 10;
	subtractionNum2 = rand() % 9 + 1;

	subtractionAnswer = subtraction(subtractionNum1, subtractionNum2);

	cout << subtractionNum1 << " - " << subtractionNum2 << " = " << subtractionAnswer << "\n\n";

	// Multiplication section
	cout << "Multiplication:" << endl;

	int multiplicationNum1 = 0,
		multiplicationNum2 = 0,
		multiplicationAnswer = -1;

	multiplicationNum1 = rand() % 9 + 1;
	multiplicationNum2 = rand() % 9 + 1;

	multiplication(multiplicationNum1, multiplicationNum2, multiplicationAnswer);

	cout << multiplicationNum1 << " * " << multiplicationNum2 << " = " << multiplicationAnswer << "\n\n";

	// Division section
	cout << "and finally, Division:" << endl;

	double divisionNum1 = 0,
		   divisionNum2 = 0,
		   divisionAnswer;

	divisionNum1 = rand() % 5 + 1;
	divisionNum2 = rand() % 9 + 7;

	divisionAnswer = division(divisionNum1, divisionNum2);

	cout << divisionNum1 << " / " << divisionNum2 << " = " << divisionAnswer << "\n\n";

	cout << "Did I pass??\n";

	system("pause");
	return 0;
}