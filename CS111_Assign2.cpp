#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int input_validation()
{
	const int LOWER_LIMIT = 1;
	const int UPPER_LIMIT = 6;
    int input;
    cin >> input;
    while(input < LOWER_LIMIT  || input < UPPER_LIMIT || cin.fail()){
        cin.clear();
        cout << "Incorrect input. Please enter numbers 1-6 only" << endl;
        string dummy;
        cin >> dummy;
        cin >> input;
    }
    return input;
}

//Function to display a welcome message
void welcome_message()
{
    cout << "+-------------------------------------------------+\n";
    cout << "|   WELCOME TO THE STUDENT MARKS SORTING PROGRAM  |\n";
    cout << "+-------------------------------------------------+\n";
}

//Function to display exit message
void exit_program()
{
    cout << "+----------------------------------+\n";
    cout << "| THANK YOU FOR USING THIS PROGRAM |\n"; 
    cout << "+----------------------------------+\n";
}

int main()
{
    welcome_message();
    ifstream output;
    output.open("studentmarks.txt");
    output.close();
    
    ofstream input;
    input.open("summary.txt");
    string index;
    string student_name;

    int choice;
    const int PRINT_LIST = 1;
    const int PRINT_DETAILS = 2;
    const int PRINT_TOTAL = 3;
    const int PRINT_SORTED = 4;
    const int WRITE_REPORT = 5;
    const int EXIT_PROGRAM = 6;
    
    cout << "Menu" << endl 
         << "1) Print the Entire List" << endl 
         << "2) Print Details of Student Matching a Given ID" << endl
         << "3) Calculate Total and Print Entire List with Total" << endl
         << "4) Print List sorted by Total" << endl
         << "5) Write Report to File" << endl
         << "6) Exit Program" <<  endl
         << "Enter your choice"; 
    choice = input_validation();
    
    switch(choice){
            case 1: cout << index << student_name;
            case 2: cout << index << student_name;
            case 3: cout << index << student_name;
            case 4: cout << index << student_name;
            case 5: cout << index << student_name;
            case 6: cout << index << student_name;
        }

    input.close();

    exit_program();

    return 0;
}
