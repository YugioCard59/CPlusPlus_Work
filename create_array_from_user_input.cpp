/* Create an array of 9 integers.
Prompt the user to enter 9 integer values and store them in the array.
After all the values are entered, print the values in reverse order.*/

#include <iostream>   //ALWAYS INCLUDE INUPT OUTPUT STREAM

using namespace std;  //INCLUDE THIS NAMESPACE TO AVOID USING STD:: BEFORE KEYWORDS

int main() {

    int number;
    int arraySize = 9;    //ARRAY SIZE MUST BE DECLARED FOR ARRAY
    int myArray[arraySize];    //DECLARE ARRAY

    //create the array
    int count = 0;
    while (count < arraySize) {
        cout << "Please enter an integer value: " << endl;
        cin >> number;
        myArray[count] = number;
        count ++;
    }

    cout << "Here are your numbers in reverse stored in an array: ";
    //ARRAY IS REVERSED WITH FOR LOOP THAT ITERATES DOWN FROM THE SIZE OF THE ARRAY
    for (int i = arraySize-1; i >= 0; i--) {
        cout << myArray[i];
    }


    return 0;
}
