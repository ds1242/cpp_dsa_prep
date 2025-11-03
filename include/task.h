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
void setTitle(string title_input);
void setDescription(string description_input);
void setPriority(int priority_input);
void displayTask();
string getTitle();
string getDescription();
int getPriority();

};

#endif
