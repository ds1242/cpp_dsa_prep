#include <iostream>
#include <string>
#include "task.h"
#include "node.h"

using namespace std;

// function signatures
void executeActions(char c);
void addTask(string title_input, string description, int priority);
void listTasks();

Node* list = NULL; //global linked list

int main() 
{

    char choice = 'i';
    cout << "Welcome to the Task Manager!\n\n";

    do
    {
        cout << "Please select an action:\n";
        cout << "\t a: add a new task\n";
        cout << "\t e: edit a task\n";
        cout << "\t l: list tasks\n";
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
    Task* newTask = NULL;

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

            addTask(title_input, description, priority);

            break;
        case 'l':
            listTasks();
            break;
        case 'q':
            cout << "Goodbye\n";
            break;
        default: cout << c << " is an invalid input!\n";
    }
}

void addTask(string title_input, string description, int priority)
{
    Node* tempList = list; // work on a copy of the current list
    Node* newNode = new Node();

    Task* newTask = new Task(title_input, description, priority);

    newNode->next = list; 
    newNode->task = newTask;
    list = newNode;
}

void listTasks()
{
    Node* tempList = list;

    while(tempList != NULL) 
    {
        tempList->task->displayTask();
        tempList = tempList->next;
    }
}