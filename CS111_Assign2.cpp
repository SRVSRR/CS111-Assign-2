#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int validate_input()
{
	const int LOWER_LIMIT = 1;
	const int UPPER_LIMIT = 6;
    int input;
    cin >> input;
    
    while(input < LOWER_LIMIT  || input > UPPER_LIMIT || cin.fail())
	{
        cin.clear();
        string dummy;
        cin >> dummy;
        cout << "ERROR!. Please enter a number between 1-6 only" << endl;
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

void program_start_quit(bool& continue_running)
{
	char user_decision;
	cout << "\n Enter S to start or Q to quit";
	cin >> user_decision;
	
	while(user_decision != 'S' && user_decision != 's' && user_decision != 'Q' && user_decision != 'q')
	{
		cin.clear();
		string dummy;
		cin >> dummy;
		cout << "ERROR!, invalid input was detected" << endl;
		cout << "Please enter either \"S\" or \"Q\" only" << endl;
		cin >> user_decision;
	}
	
	if (user_decision == 'S' || user_decision == 's')
	{
		continue_running = true;
	}
	
	else if (user_decision == 'Q' || user_decision == 'q')
	{
		continue_running = false;
	}
}

void fill_array(string file_name, int& rows, int student_id[], string student_name[], double maths_marks[], double science_marks[], double english_marks)
{
	string remove_header;
	
	ifstream read_file;
	read_file.open(file_name);
	
	if(!read_file)
	{
		cout << "ERROR!. This file could not be found" << endl;
	}
	
	else
	{
		getline(read_file, remove_header);
		
		while(read_file >> student_id[rows] >> student_name[rows] >> maths_marks[rows] >> science_marks[rows] >> english_marks[rows])
		{
			rows++;
		}
	}
}

void print_entire_list(int rows, int student_id[], student_name[], maths_marks[], science_marks[], english_marks[])
{
	cout << "\n The Entire List of Students:" << endl << endl;
	cout << left << setw(15) << "ID#" << setw(10) << endl;
	cout << left << setw(15) << "Name" << setw(15) << endl;
	cout << left << setw(15) << "Maths" << setw(10) << endl;
	cout << left << setw(15) << "Science" << setw(15) << endl;
	cout << left << setw(15) << "English" << setw(15) << endl;
	
	for(int i = 0; i < rows; i++)
	{
		cout << left << setw(15) << student_id[i] << setw(10) << endl;
		cout << left << setw(15) << student_name[i] << setw(15) << endl;
		cout << left << setw(15) << maths_marks[i] << setw(10) << endl;
		cout << left << setw(15) << science_marks[i] << setw(15) << endl;
		cout << left << setw(15) << english_marks[i] << endl;	
	}
	
}

int main()
{
	int choice;
	int rows = 0;
    
    //Constant declarations
    const int CAPACITY = 300;
    const int PRINT_LIST = 1;
    const int PRINT_DETAILS = 2;
    const int PRINT_TOTAL = 3;
    const int PRINT_SORTED = 4;
    const int WRITE_REPORT = 5;
    const int EXIT_PROGRAM = 6;
    
    bool continue_running = true;
    
    //Arrays for storing different categories of data
    int student_id[CAPACITY];
    string student_name[CAPACITY];
    double maths_marks[CAPACITY];
    double science_marks[CAPACITY];
    double english_marks[CAPACITY];
    
    welcome_message();
	

    return 0;
}
