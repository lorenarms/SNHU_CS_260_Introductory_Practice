// LINEAR SEARCH ALGORITHM

#include <iostream>
using namespace std;

int LinearSearch(int numbers[], int numbersSize, int key) {
    
    for (int i = 0; i < numbersSize; ++i) { //linear search
        if (numbers[i] == key) {
            return i;
        }
           
    }

    return -1;
}


int main()
{
    int numbers[] = { 2, 3, 6, 11, 16, 23, 34, 44, 58, 69 };
    const int NUMBERS_SIZE = 10;        //constant var for size of array
    int key = 0;                    //user selected key
    int keyIndex = 0;               //index of key if found

    cout << "Numbers: ";
    for (int i = 0; i < NUMBERS_SIZE; ++i) {
        cout << numbers[i] << ' ';

    }
    cout << endl;
    cout << "Enter a value: ";
    cin >> key;

    keyIndex = LinearSearch(numbers, NUMBERS_SIZE, key);        //call method to search linearly

    if (keyIndex == -1) {
        cout << key << " was not found." << endl;

    }
    else {
        cout << "Found " << key << " at index " << keyIndex << endl;
    }

    cin.get();
    return 0;

}

