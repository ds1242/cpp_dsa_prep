#ifndef _NODE_H
#define _NODE_H

#include <task.h>

class Node
{
public:
    Task *task;
    Node *next;
    Node(); // constructor
};

#endif
