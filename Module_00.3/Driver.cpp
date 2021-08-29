//BINARY SEARCH ALGORITHM EXAMPLE

#include <iostream>

using namespace std;

int BinarySearch(int numbers[], int numberSize, int key) {
	int mid = 0, low = 0, high = 0;
	high = numberSize - 1;				//highest index to search to

	while (high >= low) {				//highest index is greater than lowest index; 
											//repeat this until the middle index = key
		mid = (high + low) / 2;			//find middle integer index
		if (numbers[mid] < key) {		//key is above middle index
			low = mid + 1;				//set lowest index to search to middle index

		}
		else if (numbers[mid] > key) {	//key is below middle index
			high = mid - 1;				//set highest index to middle index
		}
		else {
			return mid;					//key is middle index
		}
		
	}

	return -1;	//not found

}

int main() {
	int numbers[] = { 2, 4, 7, 10, 11, 32, 45, 87 };		//create array of numbers
	const int NUMBERS_SIZE = 8;								//constant for total indexes
	int key = 0;
	int keyIndex = 0;

	cout << "NUMBERS: ";
	for (int i = 0; i < NUMBERS_SIZE; ++i) {
		cout << numbers[i] << ' ';
	}
	cout << endl;

	cout << "Enter a value: ";
	cin >> key;

	keyIndex = BinarySearch(numbers, NUMBERS_SIZE, key);

	if (keyIndex == -1) {
		cout << key << " was not found." << endl;
	}
	else {
		cout << "Found " << key << " at index " << keyIndex << "." << endl;
	}

	cin.get();
	return 0;
}