#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
using namespace std;

//color codes definition
#define RESET  "\033[0m"      //default color
#define RED    "\033[31m"      
#define GREEN  "\033[32m"      
#define YELLOW "\033[33m"      
#define BLUE   "\033[34m"      
#define MAGENTA "\033[35m"     
#define CYAN   "\033[36m"      
#define WHITE  "\033[37m"      

int main() {
    //enable ANSI color codes for texts
    system("color");

    vector<string> names;                   //vector initialization to store names
    int numNames;                           //variable initialization to store number of names
    string name;                            //variable initialization to store name
    bool programIsRunning = true;           //program is always running until user decides to exit
    char choice;                            //variable initialization to store user choice

    cout << CYAN << "+----------------------------------------------+" << RESET << endl;
    cout << CYAN << "|" << WHITE << "            Name Sorting Program              " << CYAN << "|" << RESET << endl;
    cout << CYAN << "+----------------------------------------------+" << RESET << endl;

    //the program will be running until user decides to exit, programIsRunning = true
    while (programIsRunning) {
        
        cout << CYAN << "| " << YELLOW << "Enter the number of names: " << RESET;
        cin >> numNames; //user input for number of names

        //input validation
        if (numNames <= 0) {
            cout << RED << "Invalid input. Please enter a number greater than 0." << RESET << endl;
            continue;
        }
        
        //sort names in ascending order
        cin.ignore();
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;

        cout << "\n\n";
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;
        cout << CYAN << "|" << WHITE << setw(46) << left << "            Enter " + to_string(numNames) + " names below" << CYAN << "|" << RESET << endl;
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;

        //loop to get names entered by user
        for (int i = 0 ; i < numNames; i ++) {
            cout << CYAN << "|" << YELLOW << " Name " << i + 1 << ": " << RESET;
            getline(cin, name);
            names.push_back(name);
        }
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;

        //sort names in ascending order
        sort(names.begin(), names.end()); 

        //display sorted names
        cout << "\n\n";
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;
        cout << CYAN << "|" << WHITE << "                Sorted Names                  " << CYAN << "|" << RESET << endl;
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;
        for (int i = 0; i < numNames; i++) {

            string number = to_string(i + 1);
            string fullLine = number + names[i];
            cout << CYAN << "| " << GREEN << i + 1 << ". " << names[i] << setw(48 - fullLine.length()) << right << CYAN << "|" << RESET << endl;
            
        }
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;

        //ask user if they want to continue
        cout << YELLOW << "\nContinue sort? (Y/N): " << RESET;
        cin >> choice;
        cin.ignore();
        cout << CYAN << "+----------------------------------------------+" << RESET << endl;

        if (choice == 'N' || choice == 'n') {

            cout << GREEN << "\n\nThank you for using the program. Goodbye!" << RESET << endl;
            Sleep(2000); //delay for 2 seconds
            programIsRunning = false;

        }   else {
            //clear vector to store new names
            names.clear(); 
            //clear screen for better user experience
            system("CLS"); 
        }
    }
    return 0;
}