//VECTORS AND STRUCTS

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Ages {
	string name;
	int age;
};

int main() {

	vector<Ages> userAges(10);

	userAges.at(0).name = "Angelina";
	userAges.at(0).age = 43;
	userAges.at(1).name = "Lawrence";
	userAges.at(1).age = 37;
	userAges.at(2).name = "Trinity";
	userAges.at(2).age = 18;
	userAges.at(3).name = "Sofia";
	userAges.at(3).age = 17;

	for (Ages person : userAges) {
		cout << "Name: " << person.name << "   Age: " << person.age << endl;
	}


    const int MAX_ELEMENTS = 10;
    int annualSalary = 0;
    double taxRate = 0.0;
    int taxToPay = 0;
    int totalSalaries = 0;
    int totalTaxes = 0;
    int numSalaries = 0;
    bool keepLooking = true;
    int i = 0;

    vector<int> salaryBase(5);
    vector<double> taxBase(5);
    vector<int> annualSalaries(MAX_ELEMENTS);
    vector<int> taxesToPay(MAX_ELEMENTS);

    salaryBase.at(0) = 0;
    salaryBase.at(1) = 20000;
    salaryBase.at(2) = 50000;
    salaryBase.at(3) = 100000;
    salaryBase.at(4) = 99999999;

    taxBase.at(0) = 0.0;
    taxBase.at(1) = 0.10;
    taxBase.at(2) = 0.20;
    taxBase.at(3) = 0.30;
    taxBase.at(4) = 0.40;

    cout << "\nEnter annual salary (0 to exit): " << endl;
    cin >> annualSalary;

    //LOOP INPUT EXAMPLE>>>
    while ((annualSalary > 0) && (numSalaries < MAX_ELEMENTS)) {        //outer loop; checks for exit (0) or full vector (numSalaries)
        i = 0;              //reset 'i' to zero for following loop
        keepLooking = true; //set bool to 'true' for following loop

        // Search for appropriate table row for given annualSalary
        while ((i < salaryBase.size()) && keepLooking) {            //search through vector
            if (annualSalary <= salaryBase.at(i)) {
                taxRate = taxBase.at(i);        //match tax rate to salary location
                keepLooking = false;            //end inner loop
            }
            else {
                ++i;                    //increment 'i' and start again
            }
        } // End inner while loop (search for appropriate table row)

        taxToPay = static_cast<int>(annualSalary * taxRate); // Truncate tax to an integer amount
        annualSalaries.at(numSalaries) = annualSalary;       //set 'annualSalary' to salary at most recent location
        taxesToPay.at(numSalaries) = taxToPay;               //do same with 'taxesToPay'

        cout << "Annual salary: " << annualSalaries[numSalaries] <<
            "\tTax rate: " << taxRate <<
            "\tTax to pay: " << taxesToPay[numSalaries] << endl;
        ++numSalaries;                                          //increment 'numSalaries' here after all calculations are done

        // Get the next annual salary
        cout << "\nEnter annual salary (0 to exit): " << endl;
        cin >> annualSalary;
    } // End outer while loop (valid annualSalary entered)

    // Sum the annual salaries and taxes to pay and print the totals
    totalSalaries = 0;
    totalTaxes = 0;

    for (i = 0; i < numSalaries; ++i) {
        totalSalaries += annualSalaries[i];
        totalTaxes += taxesToPay[i];
    }
    cout << "\nTotal salaries: " << totalSalaries <<
        "\tTotal taxes: " << totalTaxes << endl;


	cin.get();
	return 0;
}