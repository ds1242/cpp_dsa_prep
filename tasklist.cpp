#include <iostream>
#include <string>
// #include "task.h"

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
        cout << "\t q: quit\n\n";
        cin >> choice;
        cin.ignore(); //ignore trailing \n
        executeActions(choice);
    } while (choice != 'q');

    return 0;
}

void executeActions(char c)
{
    string title_input;
    string description;
    int priority;

    switch (c)
    {
        case 'a':
            cout << endl << "Enter a task title: ";
            getline(cin, title_input);
            cout << endl << "Enter a description for the task: ";
            getline(cin, description);
            cout << endl << "Enter priority level(1 = High, 2 = Medium, 3 = Low): ";
            cin >> priority;
            while(priority > 3 || priority < 1) {
                cout << endl << "Enter priority level(1 = High, 2 = Medium, 3 = Low): ";
                cin >> priority;
            }

            cout << title_input << "\n";
            cout << description << "\n";
            cout << priority << "\n";
            break;
        case 'q':
            cout << "Goodbye\n";
            break;
        default: cout << c << " is an invalid input!\n";
    }
}