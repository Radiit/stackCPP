#include "header.h"

void createStack_1301213292(stack &s){
    (s).top = 0;
}

bool isEmpty_1301213292(stack s){
    if((s).top = 0 ){
        return true;
    }else{
        return false;
    }
}

bool isFull_13012123292(stack s){
    if((s).top == 15){
        return true;
    }else{
        return false;
    }
}

void push_1301213292(stack &s, infotype x){
    if(isFull_13012123292(s) == true){
        cout << "stack da penuh" <<endl;
    }else{
        (s).top = (s).top + 1;
        (s).info[(s).top] = x;
    }
}

infotype pop_1301213292(stack &s){
    infotype x;
    x = (s).info[(s).top];
    (s).top = (s).top - 1;
    return x;
}

void printInfo_1301213292(stack s){
    for(int i = (s).top; i >= 1; i--){
        cout << (s).info[i] << " ";
    }
}
