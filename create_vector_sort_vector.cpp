#include <iostream>
#include <vector>    //LIBRARY TO CREATE VECTOR
#include <algorithm>  //LIBRARY TO USE SORT FUNCTION

using namespace std;

int main() {

    vector<string> groceryList;    //INITIALIZE VECTOR
    string groceryItem;
    string userCmd;

    cout << "Enter grocery items or type done." << endl;

    //CHANGE WHILE LOOP TO DO WHILE
    //ADD ITEMS TO END OF LIST
    do {
        cin >> groceryItem;
        if (groceryItem == "done") {    //CHECK FOR WORD DONE AND TO SKIP APPENDING THE WORD DONE TO VECTOR
            continue;
        }

        groceryList.push_back(groceryItem);

    }while(groceryItem != "done");

    cout << endl << "Enter any key for the next item." << endl;
  
   //USE SORT FUNCTION FROM ALGORITHM LIBRARY
   //SORT ALPHABETICALLY NEED OUTER FOR LOOP TO CHOOSE INDEX
   //ASK USER FOR NEXT
    sort(groceryList.begin(), groceryList.end());
        for (int i = 0; i < groceryList.size(); i++) {
        for (string item : groceryList) {
            groceryItem = groceryList.back();
            groceryList.pop_back();
            cout << item << " ";
            cin >> userCmd;
            }
        }

    cout << endl << "Done shopping." << endl;

    return 0;
}
