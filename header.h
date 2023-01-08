#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

typedef string infotype;

struct stack{
    infotype info[15];
    int top;
};

struct stack2{
    infotype info[15];
    int top;
};

void createStack_1301213292(stack &s);
bool isEmpty_1301213292(stack s);
bool isFull_13012123292(stack s);
void push_1301213292(stack &s, infotype x);
infotype pop_1301213292(stack &s);
void printInfo_1301213292(stack s);
#endif // HEADER_H_INCLUDED
