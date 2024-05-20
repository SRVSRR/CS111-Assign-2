#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void welcome_message()
{
	cout << "+----------------------------------------------------+" << endl;
	cout << "|  WELCOME TO THE STUDENT MARKS MANAGEMENT PROGRAM!  |" << endl;
	cout << "+----------------------------------------------------+" << endl;
	
}

void exit_message()
{
	cout << "+------------------------------------+" << endl;
	cout << "|  THANK YOU FOR USING THIS PROGRAM  |" << endl;
	cout << "+------------------------------------+" << endl;
}

int main()
{
	welcome_message();
	
	cout << endl;
	
	exit_message();

	return 0;
}

