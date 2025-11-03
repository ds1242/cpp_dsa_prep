#include <iostream>
#include <string>
#include "task.h"

using namespace std;

// function signatures
void executeActions(char c);

int main() 
{

    char choice = 'i';

    do
    {
        cout << "Welcome to the Task Manager!\n\n";
        cout << "Please select an action:\n";
        cout << "\t a: add a new task\n";
        cout << "\t e: edit a new task\n";
        cout << "\t d: delete a task\n";
        cout << "\t s: sort task list (by something)\n";
        cout << "\t q: quit\n";
        cin >> choice;
        cin.ignore(); //ignore trailing \n
        executeActions(choice);
    } while (choice != 'q');

    return 0;
}

void executeActions(char c)
{
    switch (c)
    {
        case 'q':
            cout << "Goodbye";
            break;
        default: cout << c << " is an invalid input!\n";
    }
}