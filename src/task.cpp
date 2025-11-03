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

void Task::setTitle(string title_input)
{
    title = title_input;
}

void Task::setDescription(string description_input)
{
    description = description_input;
}

void Task::setPriority(int priority_input)
{
    priority = priority_input;
}



