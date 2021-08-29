//STRUCTS and BASICS


#include <iostream>

using namespace std;

struct user {                   //build a struct
    
    
    string firstName;
    string lastName;
    int iDNumber = 0;

    void GetFullName() {        //make a method inside a struct
        cout << firstName << " " << lastName << endl;
    }

};


int main()
{
    std::cout << "Hello World!\n";

    user newUser;
    newUser.firstName = "Angelina";     //access struct
    newUser.lastName = "Dominguez";
    newUser.iDNumber = 123456;

    cout << "User: " << newUser.firstName << " " << newUser.lastName << endl << "ID: " << newUser.iDNumber << endl;
    cout << endl;
    newUser.GetFullName();

    user listOfUsers[5];            //array of users, all empty
    listOfUsers[0] = newUser;       //store newUser in index 0
    cout << "User 2: " << listOfUsers[1].firstName << endl;         //prints nothing for firstName

    

    for (user thisUser : listOfUsers) {     //foreach loop
        cout << thisUser.firstName << endl;
    }


    cin.get();      //press enter to close
}


