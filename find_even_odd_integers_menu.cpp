#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//FUNCTION PROTOTYPES
int getUserChoice();
void findEvenNumbers();
void findOddNumbers();

int main()
{
	int user_choice;    //DECLARE THE USER INPUT INTEGER

	do{                //PROVIDE A MENU FOR USER CHOICES
		cout << endl
			 << "What would you like to do?" << endl
			 << "1. Find even numbers 0 - N" << endl
			 << "2. Find odd numbers 0 - N" << endl
			 << "3. Quit program" << endl << endl;

		cout << "Enter your choice: ";
		user_choice = getUserChoice();     //CALL TO A FUNCTION PROTOTYPE

		switch(user_choice)
		{
			case 1:
				findEvenNumbers();           //CALL TO A FUNCTION PROTOTYPE
				break;
			case 2:
				findOddNumbers();           //CALL TO A FUNCTION PROTOTYPE
				break;
			case 3:
				cout << "Terminating program..." << endl;    //SWITCH CASE TO END PROGRAM BY USER
				break;
			default:
				cout << "ERROR: Invalid choice. Select a valid menu item."    //DEFAULT SWITCH CASE TO HANDLE INVALID ENTRY
				     << endl << endl;
		}

	}while( user_choice != 3 );        //VALIDATE USER INPUT CHOICE

	return 0;
}

// Function definitions:
/*getUserChoice(): This integer function will use cin to get and return the user’s menu choice.
findEvenNumbers(): This void function will prompt the user for N and print the even numbers from 0 to N
findOddNumbers(): This void function will prompt the user for N and print the odd numbers from 1 to N
*/

int getUserChoice() {

    int choice;
    do {
    cout << "Please provide a menu choice (1-3): " << endl;
    cin >> choice;
    }while(choice > 3 && choice < 0);
    return choice;
}

void findEvenNumbers() {
    int N;
    cout << "Please provide a number N to list all numbers 0-N that are even: "<< endl;
    cin >> N;
    for (int i = 0; i <= N; ++i) {
        if (i % 2 == 0) {
            cout << i << ", ";
        }
    }

}

void findOddNumbers() {
    int N;
    cout << "Please provide a number N to list all numbers 0-N that are odd: "<< endl;
    cin >> N;
    for (int i = 0; i <= N; ++i) {
        if (i % 2 == 1) {
            cout << i << ", ";
        }
    }

}
