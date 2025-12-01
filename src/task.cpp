#include "task.h"
#include <iostream>
#include <string>

using namespace std;


// default constructor
Task::Task()
{
    title = "default title";
    priority = 1;
    description = "A description is needed";
}

Task::Task(string title_input, string description_input, int priority_input)
{
    title = title_input;
    description = description_input;
    priority = priority_input;
}

string Task::getTitle()
{
    return title;
}

string Task::getDescription()
{
    return description;
}

int Task::getPriority()
{
    return priority;
}

void Task::displayTask()
{
    cout << "Title: " << title << endl;
    cout << "Priority: " << priority << endl;
    cout << "Description: " << description << "\n" << endl;
}

