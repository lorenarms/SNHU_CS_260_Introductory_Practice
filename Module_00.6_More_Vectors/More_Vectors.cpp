//MORE VECTOR OPERATIONS

//REVERSING VECTORS

#include <iostream>
#include <vector>

using namespace std;

void ReverseVector() {
	vector<int> userVals { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Input Vector Values: ";
	for (int nums : userVals) {			//display the vector
		cout << nums << ' ';
	}
	cout << endl;

	int tmp = 0;
	for (int i = 0; i < userVals.size() / 2; ++i) {					//only swap halfways; divide size by 2 to achieve this
		tmp = userVals.at(i);										//store first value temporarily
		userVals.at(i) = userVals.at(userVals.size() - 1 - i);		//replace value at 'i' with value at 'size - 1 - i'
																	//**if size = 10, then 10 - 1 - 0 = 9 = last value
		userVals.at(userVals.size() - 1 - i) = tmp;					//place temporary value into size-1-i slot
	}

	cout << "Output Vector Values (reversed): ";
	for (int nums : userVals) {
		cout << nums << ' ';
	}
	cout << endl;
}


int main() {
	//vector<int> userVals(10);
	//vector<int> userOtherVals;
	//for (int i = 0; i < userVals.size(); ++i) {
	//	userVals.at(i) = i;
	//}

	//userOtherVals = userVals;	//copies all values from one to the other, adjusting size as necessary

	ReverseVector();


}