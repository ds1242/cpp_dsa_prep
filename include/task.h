#ifndef _TASK_H
#define _TASK_H

#include <string>
using namespace std;

class Task
{
private:
    string title, description;
    int priority;

public:
Task(); // default constructor
Task(string title_input, string description_input, int priority_input);// regular constructor

void displayTask();
string getTitle();
string getDescription();
int getPriority();

};

#endif
