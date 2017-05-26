
//Lab 12 Dynamic Arrays
#include <iostream>

using namespace std;

int main() {

	// Declaring Variables
	char ch;
	char *cArray;
	int *intArray;
	int arraySize;


	//Getting the size of array from user
	cout << "How many letter do you want to store? ";
	cin >> arraySize;
	cout << endl;
	
	// creating dynamic arrays with size from user input
	cArray = new char[arraySize];
	intArray = new int[arraySize];
	
	//Using for loop to get user input for the letters
	
	cout << "Enter letters " << arraySize << " with no spaces in *LOWER CASE*: ";
	cin >> cArray;
	
	cout << endl;	
		
	//for loop to store the char array into the int array
	for (int i = 0; i < arraySize; i++) {
		intArray[i] = cArray[i];
	}
	
	//for loop subtracts 32 from int array and stores the value into char array
	for (int i = 0; i < arraySize; i++) {
		cArray[i] = intArray[i] - 32;
	}


	//Prints out new values of array
	cout << "Letters converted to Upper Case:" << endl;
	for (int i = 0; i < arraySize; i++) {
		cout << cArray[i];
	}
	cout<< endl;


	return 0;
}