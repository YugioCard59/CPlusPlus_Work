#include <iostream>

using namespace std;

//FUNCTION FOR PALINDROME FUNCTION PROTOTYPE
string is_palindrome();

int main() {
    //LEARNED: TO DECLARE AN ARRAY NEED A NUMBER AS THE SIZE
    //LEARNED: UNKNOWN SIZE NOT ACCEPTED BY C++
    //DECLARE LIST OF SIZE 25 AND INITIALIZE MIN AND SECOND MIN VALUES
    int containerList[25];
    int n;
    int min = 0;
    int secondmin = 0;

    //GET INPUT FROM USER TO POPULATE VALUES FOR LIST OF SIZE 25
    cout << "Please enter 25 numbers: " << endl;
    for (int i = 0; i < 25; i ++) {
        cout << "Please enter a number to store in the array: " << endl;
        cin >> n;
        //LEARNED: CAN USE ITERATOR TO INIDCATE INDEX BUT SIZE IS STILL 25
        containerList[i] = n;
    }

    //LEARNED: TO PRINT THE ARRAY NEED FOR LOOP
    //PRINT EACH ELEMENT
    //PRINT INTRODUCTION BEFORE THE LOOP SO AS TO NOT REPEAT
    //PROVIDE INFORMATION TO THE USER ABOUT THE LIST
    cout << "This is the Array: ";
    for (int i = 0; i < 25; i++) {
        //CONDITIONS TO COMPARE ELEMENTS WITH MIN
        if (i == 0) {
            min = containerList[i];
        }
        else if (containerList[i] < min) {
            min = containerList[i];
        }
        //PRINT OUT THE LIST
        cout << containerList[i] << ", ";
    }

    //FOR LOOP TO COMPARE ELEMENTS WITH SECOND MIN
    //LEARNED: MAKE CONDITION TO CHECK IF ELEMENT IS ALREADY THE MIN
    for (int i = 0; i < 255; i ++) {
        if (i == 0) {
            if (containerList[i] != min) {
                secondmin = containerList[i];
            }
            else {
                //IF INDEX OF ELEMENT HAPPENDS TO BE 0 SINCE INPUTS BY USER
                //CAN BE VARIABLE THEN CHECK IF ELEMENT AT INDEX 0 IS ALREADY
                //THE MIN AND IF SO GO TO THE NEXT ELEMENT TO COMPARE
                secondmin = containerList[i+1];
            }
        }
        //ONCE INITIAL ELEMENT HAS BEEN COMPARED WITH SECOND MIN THEN CONTINUE COMPARING REASSIGNING
        //SECONDMIN TO THE LEAST IN THE LIST EXCLUDING MIN
        else if (containerList[i] < secondmin && containerList[i] != min) {
            secondmin = containerList[i];
        }
    }

        cout << endl;
        cout << "In ascending order this is the minimum " << min << endl;
        cout << "This is the second minimum " << secondmin << endl;
        //CALL FUNCTION TO CHECK FOR PALINDROME AND PRINT THE RESULT
        cout << is_palindrome() << endl;

    return 0;

}

string is_palindrome() {
    //PALIDROME FUNCTION NEEDS TO BE DECLARED WITH TYPE
    //lEARNED: RETURN OF THE FUNCTION NEEDS TO BE DECLARED AND INITIALIZED WITH TYPE
    //ARRAYS NEED A SIZE TO BE DECLARED IF A LIST OF VALUES ARE NOT ALREADY PROVIDED
    int n;
    int arraysizemax = 0;
    int count = 0;
    string palindrome = "";

    //VALIDATE THAT THE USER ENTERS AN ARRAY SIZE NO LARGER THAN 19
    //THIS DO WHILE WILL INITIALIZE THE ARRAY SIZE GIVEN BY THE USER
    do {
        cout << "Please enter the size of the palindrome (<20) " << endl;
        cin >> arraysizemax;
    }while (arraysizemax > 19);

    //LEARNED: AFTER A SIZE IS RETRIEVED IT CAN THEN BE USED TO DECLARE AN ARRAY
    int palindromeArray[arraysizemax];

    //LEARNED: USE ITERATOR COUNT TO TRAVERSE ARRAY AND INITIALIZE WITH VALUES
    //DO WHILE USED TO MAKE SURE THAT A VALUE GETS INITIALIZED INTO THE ARRAY AT COUNT=0 (INDEX)
    //DO WHILE LOOP USED TO VALIDATE THAT THE INDEX NUMBER DOES NOT EXCEED THE ARRAY SIZE
    do {
        cout << "Please enter up to " << arraysizemax << " integers to make the palindrome array: " << endl;
        cin >> n;
        palindromeArray[count] = n;
        count ++;
    }while(count < arraysizemax);

    cout << endl;
    //PROVIDE INFORMATION ABOUT THE ARRAY
    //LEARNED: TO PRINT AN ARRAY MUST PRINT EACH ELEMENT
    //USE FOR LOOP
    cout << "Check Palindrome array is: ";
    for (int i = 0; i <= arraysizemax - 1; i++) {
        cout << palindromeArray[i] << ", ";
    }
    cout << endl;

    //CHECK IF ARRAY IS A PALINDROME BY CHECKING THE FIRST ELEMENT WITH THE LAST ELEMENT
    //ITERATE THROUGH THE ARRAY USING TWO ITERATORS
    //LEARNED: NEED TWO ITERATORS TO MOVE THE RIGHT HAND SIDE AND THE LEFT HAND SIDE OF THE ARRAY
    //WHERE IF THERE IS A MIDDLE ELEMENT INDEX IN COMMON WITH BOTH THE RIGHT AND LEFT
    //THEN THAT IS CONSIDERED A MATCHING ELEMENT
    int j = 1;
    bool match = false;
    for (int i = 0; i < arraysizemax; i++) {
        int endside = arraysizemax - j;
        if (palindromeArray[i] == palindromeArray[endside]) {
            match = true;
        }
        else {
            match = false;
            break;
        }
        j++;
    }

    //PRINT OUT IF THE ARRAY IS A PALINDROME
    //THE RESULT IS EIGHER YES OR NO AS STRINGS
    //RETURN THE YES OR NO STRING
    cout << "Is this array a palindrome? " << endl;
    if (match == true) {
        palindrome = "Yes";
    } else {
        palindrome = "No";
    }

    return palindrome;
}
