//VECTORS AND ARRAYS

//vectors are safer to use bc index access is checked at execution
//if thisVector.at(i) doesn't exist, then execution will throw an error
//arrays have no such error checking and can be prone to "index out of bounds" errors during runtime
//or worse, changing values of other variables in memory blocks close to the array


#include <iostream>
#include <vector>		//include vector library

using namespace std;

//create a vector, then loop and display all entries in order, then reverse order
void LoopAVector() {
	const int NUM_VALS = 4;
	vector<int> courseGrades(NUM_VALS);
	int i = 0;

	courseGrades.at(0) = 7;
	courseGrades.at(1) = 9;
	courseGrades.at(2) = 11;
	courseGrades.at(3) = 10;

	for (int num : courseGrades) {
		cout << num << ' ';
	}
	cout << endl;
	for (i = NUM_VALS - 1; i >= 0; --i) {		//to get the last index, '0', must do greater-than-or-equal here
		cout << courseGrades.at(i) << ' ';
	}
	cout << endl;

}

//declaring a vector and then using a loop to allow user input for values...
void MakeAVector() {
	const int NUM_VALS = 8;         // Number of elements in vector
	vector<int> userVals(NUM_VALS); // User values vector
	int i = 0;                      // Loop index

	cout << "Enter " << NUM_VALS << " integer values..." << endl;
	for (i = 0; i < NUM_VALS; ++i) {
		cout << "Value: ";
		cin >> userVals.at(i);		//stores user input at this site
	}

	//loop to show user what they entered
	cout << "You entered: ";
	for (int nums : userVals) {
		cout << nums << " ";
	}

	/*for (i = 0; i < NUM_VALS; ++i) {
		cout << userVals.at(i) << " ";
	}
	cout << endl;*/
}

//resizing vectors
void ResizeAVector() {

	vector<int> userVals;		//no values yet
	int numVals = 0;

	cout << "Enter how many values you will input: ";
	cin >> numVals;

	userVals.resize(numVals);		//resize() funtion will resize the vector to the user input size

	userVals.size();		//returns the size of the vector
							//can be used in loops

	for (int i = 0; i < userVals.size(); ++i) {
		cout << userVals.at(i) << ' ';
	}
	cout << endl;

}

//adding elements to the end of a vector via pushback()
void AddElementsToVector() {
	vector<int> userVals(5);
	for (int i = 0; i < userVals.size(); ++i) {
		userVals.at(i) = i;
	}

	userVals.push_back(86);		//adds 86 to the end of the vector
	int back = userVals.back();			//returns the very last element of the vector
	userVals.pop_back();		//removes the last element of the vector

}

int main() {

	vector<int> itemCounts(3);		//declare a vector with 3 items
	vector<int> testVctr(10, 5);		//creates a vector with 10 elements, each assigned 5

	itemCounts.at(0) = 14;			//access vector at index with .at() 
	itemCounts.at(1) = 3;
	itemCounts.at(2) = 12;

	for (int num : itemCounts) {	//foreach loop
		cout << num << ' ';
	}
	cout << endl;
	
	
	cin.get();
	return 0;
}