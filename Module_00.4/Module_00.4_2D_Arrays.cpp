//2-DIMENSIONAL ARRAYS and SEARCHING

#include <iostream>
using namespace std;

int main() {
    const int NUM_ROWS = 2;
    const int NUM_COLS = 2;
    int i = 0;
    int j = 0;
    int maxMiles = -99; // Assign with first element in milesTracker before loop
    int minMiles = -99; // Assign with first element in milesTracker before loop

    //create 2-dimensional array
    int milesTracker[NUM_ROWS][NUM_COLS] = {
        {-10, 20},
        { 30, 40}
    };
    
    
    maxMiles = milesTracker[0][0];          //assign first value of array to each variable for comparison
    minMiles = maxMiles;                    //this is important!


    for (i = 0; i < NUM_ROWS; ++i) {                //nested for() loop for rows, then columns
        for (j = 0; j < NUM_COLS; ++j) {
            if (milesTracker[i][j] > maxMiles) {    //check for max number first
                maxMiles = milesTracker[i][j];
            }
            if (milesTracker[i][j] < minMiles) {    //check for min number next
                minMiles = milesTracker[i][j];
            }
        }
    }

    cout << "Min miles: " << minMiles << endl;
    cout << "Max miles: " << maxMiles << endl;
}